#ifndef DD3_WINDOWS_LIVE_H
#define DD3_WINDOWS_LIVE_H

#ifdef _WIN32
#include <windows.h>
#include <stddef.h>

#define DD3_NES_PLAYER_COUNT 2
#define DD3_NES_BINDING_COUNT 8
#define DD3_INPUT_KEYBOARD 0
#define DD3_INPUT_GAMEPAD 1
#define DD3_INPUT_COMBINED 2

enum DD3NesBindingAction {
    DD3_BIND_UP=0, DD3_BIND_DOWN, DD3_BIND_LEFT, DD3_BIND_RIGHT,
    DD3_BIND_B, DD3_BIND_A, DD3_BIND_START, DD3_BIND_SELECT
};

struct DD3LiveSettings {
    int fullscreen;
    int integer_scale;
    int correct_aspect;
    int vsync;
    int pause_on_focus_loss;
    int audio_enabled;
    int volume_percent;
    int audio_latency_ms;
    int input_source;
    int gamepad_deadzone_percent;
    UINT bindings[DD3_NES_PLAYER_COUNT][DD3_NES_BINDING_COUNT];
    int gamepad_bindings[DD3_NES_BINDING_COUNT];
};

void dd3_windows_live_settings_defaults(DD3LiveSettings *settings);
void dd3_windows_live_set_next_settings(const DD3LiveSettings *settings);
void dd3_windows_live_set_volume(int volume_percent);
bool dd3_windows_live_start(HWND owner, const wchar_t *rom_path,
    wchar_t *error_text, size_t error_text_count);
void dd3_windows_live_stop(void);
void dd3_windows_live_toggle_pause(void);
void dd3_windows_live_resize(int x, int y, int width, int height);
void dd3_windows_live_key_event(UINT message, WPARAM key);
HANDLE dd3_windows_live_frame_timer(void);
void dd3_windows_live_service_frame_timer(void);
bool dd3_windows_live_quick_save(void);
bool dd3_windows_live_quick_load(void);
bool dd3_windows_live_take_screenshot(void);
bool dd3_windows_live_is_running(void);
bool dd3_windows_live_is_paused(void);
HWND dd3_windows_live_window(void);
#endif

#endif
