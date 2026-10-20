cmake_minimum_required(VERSION 3.20)
project(DoubleDragonIIINESStaticRecomp VERSION 1.0.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
# Keep MSVC's Release libraries out of the portable release directory on
# case-insensitive Windows filesystems (Release and release are the same path).
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")
if(MSVC)
  set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
endif()
if(NOT WIN32)
  message(FATAL_ERROR "This portable release requires Windows x64.")
endif()

set(DD3_COMMON src/common/dd3_hash.c src/common/dd3_port.c src/common/dd3_rom.c)
set(DD3_FOUNDATION src/mapper/dd3_mmc3.c)
add_library(dd3-foundation STATIC ${DD3_COMMON} ${DD3_FOUNDATION})
target_include_directories(dd3-foundation PUBLIC src/common src/mapper src/static generated/static_semantics)

file(GLOB DD3_STATIC_SEMANTICS CONFIGURE_DEPENDS RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" generated/static_semantics/dd3_static_semantics_bank_*.c)
list(APPEND DD3_STATIC_SEMANTICS generated/static_semantics/dd3_static_semantics_index.c)
add_library(dd3-static-runtime STATIC
  src/static/dd3_static_runtime.c
  src/video/dd3_ppu_render.c
  ${DD3_STATIC_SEMANTICS})
target_include_directories(dd3-static-runtime PUBLIC src/common src/mapper src/static src/video generated/static_semantics)
target_link_libraries(dd3-static-runtime PUBLIC dd3-foundation)

add_library(dd3-core STATIC src/core/dd3_core.c)
set(DD3_TREE_INPUT "")
foreach(DD3_FILE IN LISTS DD3_STATIC_SEMANTICS)
  file(SHA256 "${CMAKE_CURRENT_SOURCE_DIR}/${DD3_FILE}" DD3_FILE_HASH)
  string(APPEND DD3_TREE_INPUT "${DD3_FILE}:${DD3_FILE_HASH}\n")
endforeach()
string(SHA256 DD3_TREE_HASH "${DD3_TREE_INPUT}")
target_compile_definitions(dd3-core PRIVATE DD3_CORE_GENERATED_TREE_SHA256="${DD3_TREE_HASH}")
target_include_directories(dd3-core PUBLIC src/core src/common PRIVATE src/static src/video)
target_link_libraries(dd3-core PRIVATE dd3-static-runtime)

add_library(dd3-frontend-adapter STATIC src/frontend/dd3_frontend_adapter.c)
target_include_directories(dd3-frontend-adapter PUBLIC src/frontend PRIVATE src/core src/common)
target_link_libraries(dd3-frontend-adapter PRIVATE dd3-core)
if(WIN32)
  if(NOT MSVC OR NOT CMAKE_SIZEOF_VOID_P EQUAL 8)
    message(FATAL_ERROR "The Windows frontend requires MSVC and the static runtime.")
  endif()
  enable_language(CXX)
  set(CMAKE_CXX_STANDARD 17)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
  include(FetchContent)
  set(SDL_SHARED OFF CACHE BOOL "" FORCE)
  set(SDL_STATIC ON CACHE BOOL "" FORCE)
  set(SDL_TEST_LIBRARY OFF CACHE BOOL "" FORCE)
  set(SDL_TESTS OFF CACHE BOOL "" FORCE)
  set(SDL_EXAMPLES OFF CACHE BOOL "" FORCE)
  set(SDL_INSTALL OFF CACHE BOOL "" FORCE)
  FetchContent_Declare(dd3_sdl
    URL "https://github.com/libsdl-org/SDL/archive/refs/tags/release-3.4.10.zip"
    URL_HASH "SHA256=30DCE54890B17544A35E4521274762016AF6ED59C2183B896EF5E6693E97FB6C"
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE)
  FetchContent_MakeAvailable(dd3_sdl)
  # Keep library assertions useful without exposing build-machine file paths.
  target_compile_definitions(SDL3-static PRIVATE SDL_ASSERT_FILE="SDL")

  add_executable(dd3-windows-launcher WIN32
    src/gui/modern/dd3_windows_launcher.cpp
    src/gui/modern/dd3_windows_live.cpp
    src/gui/modern/dd3_audio_output_sdl3.cpp
    src/gui/modern/dd3_video_output_sdl3.cpp
    src/gui/modern/launcher_version.rc
    third_party/dd3-gamepad/dd3_gamepad_input_win32.c)
  target_include_directories(dd3-windows-launcher PRIVATE src/gui/modern third_party/dd3-gamepad)
  target_compile_definitions(dd3-windows-launcher PRIVATE WIN32_LEAN_AND_MEAN NOMINMAX _CRT_SECURE_NO_WARNINGS)
  target_link_libraries(dd3-windows-launcher PRIVATE dd3-frontend-adapter SDL3::SDL3-static comdlg32 user32 gdi32 ole32)
  set_target_properties(dd3-windows-launcher PROPERTIES OUTPUT_NAME "Launcher" RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/release")
  if(MSVC)
    target_compile_options(dd3-windows-launcher PRIVATE /W4 /WX /permissive-)
  endif()
  add_custom_command(TARGET dd3-windows-launcher POST_BUILD
    COMMAND "${CMAKE_COMMAND}" -E make_directory "$<TARGET_FILE_DIR:dd3-windows-launcher>/Rom"
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${CMAKE_SOURCE_DIR}/Rom/Readme.txt" "$<TARGET_FILE_DIR:dd3-windows-launcher>/Rom/Readme.txt"
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${CMAKE_SOURCE_DIR}/third_party/SDL-LICENSE.txt" "$<TARGET_FILE_DIR:dd3-windows-launcher>/SDL-LICENSE.txt"
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${CMAKE_SOURCE_DIR}/third_party/gamecontrollerdb.txt" "$<TARGET_FILE_DIR:dd3-windows-launcher>/gamecontrollerdb.txt"
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${CMAKE_SOURCE_DIR}/VERSION.txt" "$<TARGET_FILE_DIR:dd3-windows-launcher>/VERSION.txt"
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${CMAKE_SOURCE_DIR}/README.txt" "$<TARGET_FILE_DIR:dd3-windows-launcher>/README.txt")
  add_custom_command(TARGET dd3-windows-launcher POST_BUILD
    COMMAND "${CMAKE_COMMAND}" -E make_directory "$<TARGET_FILE_DIR:dd3-windows-launcher>/Snapshots" "$<TARGET_FILE_DIR:dd3-windows-launcher>/Screenshots"
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${CMAKE_SOURCE_DIR}/Snapshots/Readme.txt" "$<TARGET_FILE_DIR:dd3-windows-launcher>/Snapshots/Readme.txt"
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${CMAKE_SOURCE_DIR}/Screenshots/Readme.txt" "$<TARGET_FILE_DIR:dd3-windows-launcher>/Screenshots/Readme.txt"
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${CMAKE_SOURCE_DIR}/third_party/SDL_GameControllerDB-LICENSE.txt" "$<TARGET_FILE_DIR:dd3-windows-launcher>/SDL_GameControllerDB-LICENSE.txt"
    COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${CMAKE_SOURCE_DIR}/THIRD-PARTY-NOTICES.txt" "$<TARGET_FILE_DIR:dd3-windows-launcher>/THIRD-PARTY-NOTICES.txt")
endif()
