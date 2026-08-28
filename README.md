# 🗝️ Dungen Escape

**Dungen Escape** is an immersive 3D dungeon crawler and room escape game focused on atmospheric exploration, puzzle-solving, item collection, and navigating hazardous maze-like dungeons to find the path to freedom.

---

## 🌟 Key Features

- **Atmospheric Dungeon Exploration**: Navigate dark, moody corridors, torch-lit chambers, and hidden rooms.
- **Puzzle & Key Mechanics**: Discover locked doors, find hidden keys, solve environmental riddles, and trigger switches to unlock new areas.
- **Inventory & Item System**: Collect, inspect, and utilize tools, potions, weapons, and quest items.
- **Dynamic Lighting & Shadows**: Immersive lighting setups featuring flickering torches, dark corners, and suspenseful visual design.
- **Responsive Character Controller**: Fluid first-person or third-person movement, crouching, jumping, and interaction prompts.
- **Modular Codebase**: Built using clean C# scripts following SOLID principles and the DRY pattern for scalability.

---

## 🛠️ Tech Stack & Dependencies

- **Engine**: Unity Engine (Universal Render Pipeline - URP recommended)
- **Language**: C# (.NET / Mono)
- **Physics**: Unity 3D Rigidbody & Collider triggers
- **Rendering**: Custom lighting, post-processing profiles, and PBR materials

---

## 📂 Project Structure

```text
DungenEscape/
├── Assets/
│   ├── Animations/         # Door openings, trap triggers, and character actions
│   ├── Audio/              # Creaky doors, footsteps, ambient dungeon echoes, and UI sounds
│   ├── Materials/          # Stone walls, metal grates, wood, and torch glow materials
│   ├── Models/             # 3D meshes for dungeon modules, props, keys, and chests
│   ├── Prefabs/            # Reusable traps, doors, keys, and interactive elements
│   ├── Scenes/             # Main game level, menu screens, and win/loss states
│   ├── Scripts/            # Core C# source code
│   │   ├── Audio/          # Dynamic sound triggers and ambient loops
│   │   ├── Core/           # Game managers, state handlers, and save systems
│   │   ├── Interaction/    # Raycast interactables, doors, levers, and pick-ups
│   │   ├── Player/         # Character movement, health, and camera control
│   │   ├── Puzzles/        # Key-lock systems, pressure plates, and logic gates
│   │   └── UI/             # Inventory HUD, interaction prompts, and pause menu
│   └── Textures/           # Diffuse, normal, and roughness maps for dungeon textures
└── ProjectSettings/        # Input mappings and physics configurations
