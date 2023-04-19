# Mouse Injector for Dolphin 5.0, DuckStation, PCSX2, and other emulators

An external app that injects cursor input into game memory.

### *If you have a game request, please go to the 'Discussions' tab and post it!*

## Supported Emulators
| Emulator/Frontend | Version | Executable name (case sensitive) |
| --- | :---: | :---: |
| Dolphin | 5.0 and up | dolphin.exe |
| DuckStation | 0.1-5485 | duckstation-qt-x64-ReleaseLTCG.exe |
| PCSX2 Nightly | 1.7.4126 | pcsx2-qtx64-avx2.exe |
| RetroArch (see cores below) | 1.14.0 | retroarch.exe |
| PPSSPP | 1.14.4 | PPSSPPWindows.exe / PPSSPPWindows64.exe |
* NOTE: Versions given are the latest that have been tested working, may work with newer
* NOTE: PCSX2 will only hook with **BIOS versions 5XXXX and up**.

## Supported RetroArch Cores
| Console | Core | Version |
| :---: | :---: | :---: |
| N64 | Mupen64Plus-Next | 2.4-Vulkan bc24153 |
| PS1 | Beetle PSX HW | 0.9.44.1 234433f |
| PS1 | Beetle PSX | 0.9.44.1 6ed5790 |
| PS1 | PCSX-ReARMed | r23l 4373e29 |
| PS1 | DuckStation | |
| PS1 | SwanStation | 1.00 bc5f6c8 |
| SNES | bsnes-mercury Balanced | v094 |
* NOTE: For RetroArch the window needs to be focused for it to hook initially.
* NOTE: All cores have not been tested exhaustively

## How to Use
1. Start emulator first
2. Start MouseInjector, read initial information then press ctrl+1
3. Make sure game is running and press '4' to hook into the process
    1. If game is supported then the mouse will be captured at the position it was at when hooked
        * You will be <b><u>unable</u></b> to use the mouse elsewhere while it is hooked, press 4 to unhook
        * Some games depend on post startup values/addresses so hook may not happen immediately
            * DuckStation games usually will not hook until after the startup sequence
    2. Unsupported/broken games will not hook and mouse won't be captured
4. Adjust options with numbers 4-7 while in-game, ctrl+0 will lock the settings
* NOTE: The cursor still moves but gets moved back to it's initial hook position so windowed mode may not
work very well if you have also mapped the mouse buttons as you may click off the window. Fullscreen is
recommended and with dual-monitors it is recommended to put the cursor in the corner before hooking to
avoid clicking off the window.

## Supported Dolphin Titles (NTSC Only)
| Game Title | Mouse Support | Issues |
| --- | :---: | ----------- |
| TimeSplitters 2 | Fair | <sup>Camera/sentry modes not supported</sub> |
| TimeSplitters: Future Perfect | Poor | <sup>All non-first person modes are not supported</sub> |
| 007: NightFire | Poor | <sup>Vehicle mode is semi-functional - last level is broken</sub> |
| Serious Sam: Next Encounter | Fair | <sup>Vehicle/submarine interfaces are not supported</sub> |
| Medal of Honor: Frontline | Fair | <sup>Minecart level is broken</sub> |
| Medal of Honor: European Assault | Good | <sup>None</sub> |
| Medal of Honor: Rising Sun | Poor | <sup>Looking down scope while in turret mode is broken</sub> |
| Metal Arms | Good | <sup>Rat driving or rat turret may not work correctly<sup> |
| Call of Duty 2: Big Red One | Good | <sup>None</sub> |
| Die Hard: Vendetta | Fair | <sup>Sentry mode not supported</sub> |
| Trigger Man | Good | <sup>None</sub> |
| Geist | Fair | <sup> ** *Requires MMU be disabled for game in Dolphin* ** <br />Camera broken on elevators, truck sentry on motorcycle level broken</sub> |

## Supported PS1 Titles
| Game Title | Serial | Mouse Support | Issues | Cheat File |
| --- | --- | :---: | ----------- | --- |
| Men in Black: The Series - Crashdown (NTSC) | SLUS-01387 | Good | <sup>None</sub> | |
| Codename: Tenka (USA) | SCUS-94409 | Fair | <sup>Strafe/Lean must be set to R2 in-game for strafe to work without holding the button</sub> | |
| Medal of Honor: Underground (USA) | SLUS-01270 | Fair | <sup>Machine Gun sentry doesn't always work (depends on objects in line of sight). Sidecar gun in 6-3 not supported. Precise aim not supported (holding trigger aiming). Controller type must be Analog/DualShock or else auto-center will be enabled. </sub> | |
| Revolution X (USA) | SLUS-00012 | Good | <sup>None</sub> | |
| Armorines: Project S.W.A.R.M. (USA) | SLUS-01022 | Fair | <sup>Not fully tested</sub> | |
| Resident Evil: Survivor (USA) | SLUS-01087 | Good | <sup>None</sub> | |
| The Note (Europe) | SLES-00749 | Good | <sup>Not fully tested</sub> | |
| Echo Night (USA) | SLUS-00820 | Good | <sup>Not fully tested</sub> | |
| Shadow Tower (USA) | SLUS-00863 | Good | <sup>Not fully tested</sub> | |
| South Park (USA) | SLUS-00936 | Good | <sup>Supplied cheats recommended, Not fully tested</sub> | **SouthPark_SLUS-00936.cht** |
| King's Field (Japan) | SLPS-00017 | Good | <sup>Not fully tested, Will not hook until in-game</sub> | |
| King's Field (II) (USA) | SLUS-00158 | Good | <sup>Not fully tested</sub> | |
| King's Field II (III) (USA) | SLUS-00255 | Good | <sup>Not fully tested</sub> | |
| Armored Core (USA) | SCUS-94182 / SLUS-01323 | Fair | <sup>VS Mode not supported, Not fully tested</sub> | |
| Baroque - Yuganda Mousou (Japan) | SLPM-86328 | Fair | <sup>Supplied cheat required to prevent camera y-axis from being reset on hit, Not fully tested</sub> | **Baroque_SLPM-86328.cht** |
| Alient Trilogy (USA) | SLUS-00007 | Good | <sup>Requires supplied cheat file, Not fully tested</sub> | **AlienTrilogy_SLUS-00007.cht** |
| Disruptor (USA) | SLUS-00224 | Good | <sup>Requires supplied cheat file, Not fully tested</sub> | **Disruptor_SLUS-00224.cht** |
| LSD: Dream Emulator (Japan) | SLPS-01556 | Good | <sup>Requires supplied cheat file, Not fully tested</sub> | **LSDDreamEmulator_SLPS-01556.cht** |
| Hellnight (Europe) | SLES-01562 | Good | <sup>Requires supplied cheat file, Not fully tested</sub> | **Hellnight_SLES-10562.cht** |
| Aquanaut's Holiday (USA) | SCUS-94603 | Good | <sup>Requires supplied cheat file, Very little testing</sub> | **AquanautsHoliday_SCUS-94603.cht** |
| Future Cop: L.A.P.D. (USA) | SLUS-00739 | Fair | <sup>Not fully tested</sub> | |
| Duke Nukem: Time to Kill (USA) | SLUS-00583 | Fair | <sup>Requires supplied cheat file, Not fully tested</sub> | **DukeNukemTimeToKill_SLUS-00583.cht** |
| Jumping Flash (USA) | SCUS-94103 | Good | <sup>Requires supplied cheat file</sub> | **JumpingFlash_SCUS-94103.cht** |
* NOTE: If DuckStation is not hooking, try restoring the default settings. 'Settings->General->Restore Defaults'
* Importing cheat files in DuckStation: 'Tools->Cheat Manager->Cheat List->Import->From File'

## Supported Mupen64Plus(RetroArch)
| Game Title | Mouse Support | Issues |
| --- | :---: | ----------- |
| GoldenEye: 007 (NTSC) | Fair | <sup>None</sub> |
| Sin and Punishment (J) | Good | <sup>Not fully tested</sub> |

## Supported SNES Titles
| Game Title | Mouse Support | Issues |
| --- | :---: | ----------- |
| Pac-Man 2: The New Adventures (USA) | Good | <sup>Not fully tested</sub> |
| Timon & Pumbaa's Jungle Games (USA) | Good | <sup>None</sub> |
| The Untouchables (USA) | Good | <sup>Crosshair shooting sections only</sub> |
| R-Type III: The Third Lightning (USA) | Good | <sup>Not fully tested</sub> |
| Wild Guns (USA) | Good | <sup>Recommended use of supplied patch to disable cursor movement when moving character (Disables x-axis cursor movement for both players)</sub> |
* NOTE: Patches must either be applied with an IPS patching tool, such as Lunar IPS, or by using softpatching with RetroArch

## Supported PCSX2 Titles
| Game Title | Serial | Mouse Support | Issues | In-game Options | Cheat File |
| ---------- | :----: | :-----------: | :----: | :-------------: | :--------: |
| Red Dead Revolver (USA) | SLUS-20500 | Fair | <sup>Gatling guns and final scene may break if game is loaded from memory card after a shutdown.  **Fix below*</sub> | <sup>Target Mode: Toggle</sub> | - |
| Time Crisis II (USA) | SLUS-20219 | Good | <sup>Not fully tested</sub> | - | - |
| Vampire Night (USA) | SLUS-20221 | Good | <sup>Not fully tested</sub> | - | - |
| Gunslinger Girl Vol. 1 (Japan)| SLPS-25343 | Fair | <sup>Not fully tested</sub> | - | - |
| Darkwatch (USA) | SLUS-21043 | Good | <sup>**Requires supplied cheat file**</br>Horse aiming is not quite right but is usable.</sub> | - | **327052E8.pnach** |
| Black (USA) | SLUS-21376 | Good | <sup>Not fully tested</sub> | - | - |
| Urban Chaos: Riot Response (USA) | SLUS-21390 | Good | <sup>Not fully tested</sub> | <sup>Auto-Center: No</sub> | - |
| 007: Agent Under Fire (USA) | SLUS-20265 | Good | <sup>Mouse movement warps camera while paused and during in-game cutscenes</br>Aim-lock not disabled on auto-scroller levels</sub> | - | - |
| Quake III: Revolution (USA) | SLUS-20167 | Good | <sup>None</sub> | <sup>Auto Center: No <br> Auto Aiming: No (only available from main menu options) | - |
| 50 Cent: Bulletproof (USA) | SLUS-21315 | Good | <sup>Not fully tested</sub> | <sup>Camera->Aim Assist: Off</sub> | - |
| Call of Duty: Finest Hour (USA) | SLUS-20725 | Good | <sup>None</sub> | <sup>Aim Assist: Off</sub> | - |
| Cold Winter (USA) | SLUS-20845 | Good | <sup>Split-screen mode not supported</sub> | <sup>Profile options - Aim Assist: Off</sub> | - |
| Medal of Honor: Vanguard (USA) | SLUS-21597 | Good | <sup>Multiplayer mode not supported</sub> | - | - |
| Mercenaries: Playground of Destruction (USA) | SLUS-20932 | Fair | <sup>**Requires cheat file to disable aim-assist**</br> X-axis in normal vehicles not supported</sub> | - | **23510F99.pnach** |
| King's Field IV: The Ancient City (USA) | SLUS-20318 | Good | <sup>Not fully tested</sub> | - | - |
| Eternal Ring (USA) | SLUS-20015 | Good | <sup>Not fully tested</sub> | - | - |
| Resident Evil: Dead Aim (USA) | SLUS-20669 | Good | <sup>**Requires supplied cheat file**</br>Third-person camera y-axis not supported</sub> | - | **FBB5290C.pnach** |
| Michigan: Report from Hell (Europe) | SLES-53073 | Fair | <sup>Door peek camera not supported</br>Not fully tested</sub> | - | - |
| Ninja Assault (USA) | SLUS-20492 | Good | <sup>**Requires supplied cheat file to disable aim-lock**</br>Not fully tested</sub> | - | **785B28DA.pnach** |
| Robotech: Invasion (USA) | SLUS-20823 | Fair | <sup>Turrets not supported</br>Not fully tested</sub> | - | - |
| Serious Sam: Next Encounter (USA) | SLUS-20907 | Good | <sup>Vehicles not supported</br>Not fully tested</sub> | <sup>Auto Center: Off</br>Auto Aim: Off</sub> | - |
| Armored Core 2 (USA) | SLUS-20014 | Good | <sup>Arena replays broken</br>Not fully tested</sub> | - | - |
| Global Defence Force (PAL) / Chikyū Bōeigun 2 (Japan) | SLES-54464 / SLPM-62652 | Good | <sup>Vehicle mouse control is experimental</br>Not fully tested</sub> | Control Type: Technical | - |
| Jurassic: The Hunted (USA) | SLUS-21907 | Good | <sup>**Requires supplied cheat file**</br>Optional 60FPS cheat recommended</sub> | Aim Assist: Off | **EFE4448F.pnach** |
* NOTE: PCSX2 will only hook with **BIOS versions 5XXXX and up**.
* NOTE: Some aspects may break when a game is started with overclocking. Requires testing.
* PCSX2 Settings: **Disable** *'Settings->Interface->Double-Click Toggles Fullscreen'* | **Enable** *'Settings->Interface->Hide Cursor In Fullscreen'*
* RDR Gatling/Final Scene Fix: Start a new game on a new name. When in-game, pause and quit back to menu. Reload your main save.
* Place cheat files in 'cheats/PS2' folder in the main PCSX2 directory. In PCSX2 go to 'Settings->Emulation' and tick 'Enable Cheats'.

## Supported PPSSPP Titles
| Game Title | Serial | Mouse Support | Issues | In-game Options |
| ---------- | ------ | :-----------: | ------ | --------------- |
| Coded Arms (USA) | ULUS10019 | Fair | <sup>Not fully tested</sub> | <sup>Free Look->Lock On: None</sub> |
| Ghost in the Shell: Stand Alone Complex (USA) | ULUS10020 | Fair | <sup>Not fully tested</sub> | |

# ManyMouse

ManyMouse is Copyright (c) 2005-2012 Ryan C. Gordon and others. https://icculus.org/manymouse/
