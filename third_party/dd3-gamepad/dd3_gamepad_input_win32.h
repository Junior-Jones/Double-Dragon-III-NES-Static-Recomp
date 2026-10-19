#ifndef DD3_GAMEPAD_INPUT_WIN32_H
#define DD3_GAMEPAD_INPUT_WIN32_H

#include <stddef.h>
#include <stdint.h>
#include <windows.h>

#include <SDL3/SDL_gamepad.h>

#ifdef __cplusplus
extern "C" {
#endif

#define DD3_GAMEPAD_BINDING_COUNT 8

typedef enum DD3GamepadControl {
    DD3_GAMEPAD_DPAD_UP = 1,
    DD3_GAMEPAD_DPAD_DOWN,
    DD3_GAMEPAD_DPAD_LEFT,
    DD3_GAMEPAD_DPAD_RIGHT,
    DD3_GAMEPAD_LEFT_STICK_UP,
    DD3_GAMEPAD_LEFT_STICK_DOWN,
    DD3_GAMEPAD_LEFT_STICK_LEFT,
    DD3_GAMEPAD_LEFT_STICK_RIGHT,
    DD3_GAMEPAD_FACE_SOUTH,
    DD3_GAMEPAD_FACE_EAST,
    DD3_GAMEPAD_FACE_WEST,
    DD3_GAMEPAD_FACE_NORTH,
    DD3_GAMEPAD_LEFT_SHOULDER,
    DD3_GAMEPAD_RIGHT_SHOULDER,
    DD3_GAMEPAD_LEFT_TRIGGER,
    DD3_GAMEPAD_RIGHT_TRIGGER,
    DD3_GAMEPAD_START,
    DD3_GAMEPAD_BACK,
    DD3_GAMEPAD_LEFT_STICK_BUTTON,
    DD3_GAMEPAD_RIGHT_STICK_BUTTON,
    DD3_GAMEPAD_CONTROL_LAST = DD3_GAMEPAD_RIGHT_STICK_BUTTON
} DD3GamepadControl;

typedef struct DD3GamepadInputWin32 {
    SDL_Gamepad *handle;
    int initialized;
    int startup_gamepad_found;
    unsigned player_index;
    unsigned refresh_countdown;
    uint32_t analog_latched;
    char preferred_guid[64];
    char guid[64];
    wchar_t name[160];
} DD3GamepadInputWin32;

int dd3_gamepad_win32_initialize(DD3GamepadInputWin32 *input,
                                     const wchar_t *mapping_path,
                                     unsigned player_index,
                                     const wchar_t *preferred_guid);
void dd3_gamepad_win32_shutdown(DD3GamepadInputWin32 *input);
void dd3_gamepad_win32_begin_frame(DD3GamepadInputWin32 *inputs,
                                       size_t input_count);
uint16_t dd3_gamepad_win32_poll(
    DD3GamepadInputWin32 *input,
    const int bindings[DD3_GAMEPAD_BINDING_COUNT],
    int deadzone_percent);
int dd3_gamepad_win32_connected(const DD3GamepadInputWin32 *input);
const wchar_t *dd3_gamepad_win32_name(const DD3GamepadInputWin32 *input);
void dd3_gamepad_win32_guid(const DD3GamepadInputWin32 *input,
                                wchar_t *guid, size_t capacity);
void dd3_gamepad_win32_default_bindings(
    int bindings[DD3_GAMEPAD_BINDING_COUNT]);
const wchar_t *dd3_gamepad_win32_control_name(int control);
int dd3_gamepad_win32_capture_control(DD3GamepadInputWin32 *input);
void dd3_gamepad_win32_control_display_name(
    const DD3GamepadInputWin32 *input, int control,
    wchar_t *text, size_t capacity);

#ifdef __cplusplus
}
#endif

#endif
