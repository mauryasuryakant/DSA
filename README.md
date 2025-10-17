# Horror Game 3D

A small 3D horror test project created to explore Godot's 3D features: lighting, shadows, physics, audio, and simple AI. This repository contains the Godot project files, scenes, assets, and scripts used while learning and prototyping.

> NOTE: This README was updated to reflect that this is a Godot project (not Unity). Replace placeholders (Godot version, scene names, screenshots, controls, license) with your project's real details.

## Table of contents
- About
- Demo / Screenshots
- Features
- Built with
- Getting started
  - Prerequisites
  - Open the project
  - Run in the Godot Editor
- Controls
- Gameplay
- Export / Build
- Project structure (example)
- Contributing
- Reporting bugs & requests
- Assets & attribution
- Roadmap / TODO
- License
- Contact

## About
This is a lightweight 3D horror prototype made to test Godot's 3D capabilities. The focus is on atmosphere, dynamic lighting, audio design, and quick iteration while learning the engine.

## Demo / Screenshots
(Replace these with actual images saved in /docs or /screenshots)
- docs/screenshot-1.png
- docs/screenshot-2.png

## Features
- Godot 3D scene exploration (rooms, corridors)
- Flashlight with battery depletion and flicker effects
- Light-based puzzles and triggers
- Basic enemy AI (patrol, chase)
- Audio cues and ambient soundscape
- Simple save/checkpoint (if implemented)

## Built with
- Godot Engine — specify version used (e.g., 4.1, 4.2, or 3.5). Update project.godot if needed.
- GDScript (primary) and optionally C# if used
- Godot built-in renderer (or specify: GLES3, Vulkan/HDRP equivalent in Godot 4)

## Getting started

### Prerequisites
- Godot Engine (install from https://godotengine.org/). Use the same major/minor version the project was created with for best results.
- (Optional) Godot export templates if you plan to export builds
- Git to clone the repository

### Open the project
1. Clone the repository:
   git clone https://github.com/mauryasuryakant/Horror_Game_3d.git
2. Open Godot Engine, click "Import" (or "Scan" in newer versions) and select the project folder (the folder containing project.godot).
3. If Godot prompts to convert the project (version differences), follow the prompts and review any warnings in the output.

### Run in the Godot Editor
- Set the main scene (Project → Project Settings → Run → Main Scene) if not already set.
- Click the Play button or press F5 to run the main scene in the editor.

## Controls (default)
- Move: W / A / S / D
- Look: Mouse
- Sprint: Left Shift
- Crouch: C
- Interact: E
- Toggle flashlight: F
- Pause / Menu: Esc

If you use an InputMap or custom input handling, list bindings in project settings or a README section.

## Gameplay
- Objective: Explore, discover clues, solve light-based puzzles, and survive.
- Mechanics example:
  - Flashlight drains battery — find batteries to replenish.
  - Light reveals hidden paths or deactivates traps.
  - Enemies respond to sound and light; stealth is often optimal.

Customize this section to your actual gameplay rules and objectives.

## Export / Build
### Export from Godot Editor
1. Install export templates (Project → Install Export Templates).
2. Project → Export → Add a preset (Windows, Linux, macOS, HTML5, Android, etc.).
3. Configure export options and export.

### Export from command-line (example)
Godot supports exporting from CLI if export presets are configured:

godot --path "/full/path/to/Horror_Game_3d" --export "Windows Desktop" "build/HorrorGame.exe"

Adjust the command for your platform and Godot executable path.

## Project structure (example)
- project.godot
- icon.png
- README.md
- scenes/
  - Main.tscn
  - Player.tscn
  - Enemy.tscn
- scripts/
  - player.gd
  - enemy.gd
  - game_manager.gd
- assets/
  - models/
  - textures/
  - audio/
- addons/
- docs/ or screenshots/

Update this list to match the actual repository structure.

## Contributing
Contributions are welcome! Suggested workflow:
1. Fork the repository.
2. Create a branch: git checkout -b feature/my-feature
3. Commit changes: git commit -m "Add feature"
4. Push and open a pull request

Guidelines:
- Keep commits focused and descriptive
- Add or update documentation for new features
- Include attribution when adding third-party assets

## Reporting bugs & requests
Open an issue with:
- What happened
- Steps to reproduce
- Expected behavior
- Environment (Godot version, OS)
Attach console logs and screenshots when possible.

## Assets & attribution
List third-party assets and their licenses here (audio, models, textures).
Ensure you have rights to redistribute included assets.

## Roadmap / TODO
- Tune AI behaviors and audio triggers
- Add more environmental polish and props
- Add options menu and robust save system
- Optimize for target platforms

## License
Add a LICENSE file to make the license explicit (MIT recommended for permissive use). If none exists, the project has no explicit license and cannot be reused without permission.

## Contact
Maintainer: mauryasuryakant
GitHub: https://github.com/mauryasuryakant

---

This README was updated to reflect that the project is a Godot 3D test/prototype. Replace placeholders (Godot version, scene names, screenshots, license) with the real project specifics before publishing.