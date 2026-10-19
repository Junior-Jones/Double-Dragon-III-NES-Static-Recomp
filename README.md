# Double Dragon III (NES) Static Recomp 1.0.0

Native Windows frontend and game-specific static core for Double Dragon III - The Sacred Stones on the Nintendo Entertainment System.

The original game ROM is not included. Supply a legally obtained copy of the USA release with this SHA-256 hash:

- Double Dragon III - The Sacred Stones (USA).nes
- SHA-256: 6a10a2ec6dfc612f2e3b139f12623ac6bf0c1043710c9a56794719cc59f0d32e

## Running the application

Extract the complete release folder to a writable location. Place the ROM in the Rom folder beside Launcher.exe, then run Launcher.exe and select Run. Browse ROM opens Rom by default and can also select the verified image elsewhere. The application validates the ROM before starting the game.

Escape switches between the running game and Launcher. The Launcher provides settings for audio, video, keyboard and gamepad bindings, quick-save snapshots and game-window screenshots. Press F1 for the complete shortcut guide.

Player 1 uses the arrow keys, F for A, D for B, S for Start and A for Select. Player 2 uses I/K/J/L for Up/Down/Left/Right, H for A, G for B, Y for Start and U for Select. Controls can be changed in the Launcher. The first two detected gamepads map to the two player ports.

Settings are stored in settings.ini beside the executable. Quick saves are stored in Snapshots and screenshots in Screenshots. The application is portable and requires no installer. Move the complete folder to move the application and its data.

## What "static recompilation" means

The game's executable paths were analysed before the application was built and emitted as fixed generated C semantics for 20,166 exact physical-bank and program-counter identities.

The production runtime executes those admitted identities without a runtime opcode decoder, dynamic recompiler, JIT compiler or emulator fallback. Unknown execution identities stop with a diagnostic error.

The native runtime includes NES CPU memory mapping, MMC3 bank switching and interrupts, PPU graphics, APU register handling, DMA and controller input. Gameplay, graphics and sound respond to live player input.

## Building from source on Windows

Requirements:

- 64-bit Windows 10 or later
- Visual Studio 2022 with Desktop development with C++
- CMake 3.20 or newer
- Internet access during initial configuration to download the pinned SDL3 source archive

From the source folder, run:

    cmake -S . -B build -G "Visual Studio 17 2022" -A x64
    cmake --build build --config Release --target dd3-windows-launcher

The executable and runtime files are written to build/release. SDL3 and the Microsoft C/C++ runtime are statically linked; no separate SDL DLL or Visual C++ redistributable is required.

## Automated build and package verification

The Windows ROM-free build workflow runs on pushes, pull requests and manual dispatch using Windows 2022, MSVC x64 and the same hash-pinned SDL3 source archive as local builds. It uploads only the verified portable output as a short-lived CI artifact; it does not publish a release. The build and verification do not require a ROM.

After building, run the same package check locally from PowerShell:

    ./scripts/verify-windows-package.ps1 -PackagePath build/release

The check requires the documented runtime file list, byte-identical documentation, controller mappings and third-party notices, and an AMD64 Windows executable. Unexpected files or directories fail verification, including ROMs, settings, snapshots, screenshots and build intermediates. Use a clean output folder before packaging. This verifies build/package integrity only; it does not establish gameplay coverage or completion.

## Current status

Version 1.0.0 includes the portable Windows frontend, exact-ROM validation, live video and audio, two-player input, snapshots and screenshots. Core coverage reaches the Mission Four transition. Missions Four and Five and the endings are not yet confirmed complete. Audio uses an event-driven renderer and is not cycle-perfect. Wide Screen is not included.

## Package contents and licensing

The Windows release contains Launcher.exe, README.txt, VERSION.txt, SDL-LICENSE.txt, SDL_GameControllerDB-LICENSE.txt, THIRD-PARTY-NOTICES.txt, gamecontrollerdb.txt, and readme files in Rom, Snapshots and Screenshots. The original game ROM and user data are not included.

The source package contains the production sources, generated instruction semantics, build configuration, documentation and notices.

SDL3 and the controller mappings are distributed under the licenses included with the release. Double Dragon III and Nintendo Entertainment System names and related properties belong to their respective owners.
