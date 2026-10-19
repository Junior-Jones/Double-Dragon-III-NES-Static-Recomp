# Double Dragon III 1.0.0 — Windows frontend

`Launcher.exe` is the single final Windows application. The frontend is a Win32/SDL3 host connected through `dd3_frontend_adapter.*` to one opaque static-core instance.

## Normal use

1. Start `Launcher.exe`.
2. Select **Browse** and choose `Double Dragon III - The Sacred Stones (USA).nes`, or place the exact ROM in the `Rom` folder before startup.
3. Select **Run**. If no ROM is selected, Run opens Browse automatically.
4. Escape switches between gameplay and the launcher while pausing/resuming scheduling and audio.

The toolbar and menu intentionally mirror the same actions; they are not separate settings systems. Frontend Settings, Controller Bindings and Audio Settings each have one authoritative dialog.

## Controls

Player 1 defaults: Arrow keys for D-pad, D=B, F=A, S=Start, A=Select.

Player 2 defaults: I/K/J/L for D-pad, G=B, H=A, Y=Start, U=Select.

First two detected SDL gamepads map to Players 1 and 2. D-pad or left stick controls the NES D-pad; west face is B; south face is A; Start is Start; Back/View is Select. Hot-plug/reconnect is polled during gameplay with deadzone hysteresis. `gamecontrollerdb.txt` is shipped beside the executable and loaded once for the process. Gamepad action layout uses the standardized SDL mapping; there is no hidden second remapping system in `settings.ini`.

## Audio/video/state

The core supplies copied 256x240 BGRA video and 44.1 kHz mono PCM16. The frontend adds no second intentional resampler. Disabling host audio still drains transient core PCM so the bounded output queue does not fill. Snapshot restore pauses SDL audio, loads state, flushes stale samples, then resumes if gameplay was active.

Windowed and full-screen video preserve NES proportions; optional 4:3 correction pillarboxes instead of stretching.

## Runtime files

The release starts with only:

```text
Launcher.exe
README.txt
VERSION.txt
SDL-LICENSE.txt
SDL_GameControllerDB-LICENSE.txt
THIRD-PARTY-NOTICES.txt
gamecontrollerdb.txt
Rom/Readme.txt
Snapshots/Readme.txt
Screenshots/Readme.txt
```

`settings.ini`, saved states and screenshots are generated next to `Launcher.exe` when used. The release includes empty working folders with readme files. Browse defaults to the adjacent `Rom` folder. No installation or registry configuration is required. `settings.ini` stores frontend/audio/input mode, deadzone and editable Player 1/Player 2 keyboard bindings. No developer paths or ROM are embedded.

## Current limitations

Core coverage reaches the Mission Four transition. Missions Four and Five and the endings are not yet confirmed complete. Audio uses an event-driven renderer and is not cycle-perfect. Wide Screen is not included in version 1.0.0.
