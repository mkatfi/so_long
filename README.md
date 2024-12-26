
# so_long - 2D Game Project  

![so_long Banner](https://github.com/user-attachments/assets/4c385de5-70ed-4d74-b360-d6e9510ee41a)

*A simple 2D game that combines logic, creativity, and programming.*  

---

## Overview  

**so_long** is a project from the 1337 School curriculum where students create a small 2D game using the **MiniLibX** graphics library. The goal is to control a character to collect items and reach an exit on a map while respecting specific constraints. This project emphasizes game logic, graphical rendering, and event-driven programming.  

---

## Key Objectives  

- Master basic concepts of 2D graphics programming.  
- Work with the **MiniLibX** graphics library.  
- Understand and implement map parsing.  
- Build an interactive application with keyboard controls and dynamic visuals.  

---

## Features  

- **Player Movement:** Move the player character across the map using keyboard inputs.  
- **Collectibles:** Gather all items on the map before reaching the exit.  
- **Enemy/Obstacle Handling (Bonus):** Introduce enemies or obstacles for added difficulty.  
- **Error Management:** Handle invalid maps and input gracefully.  
- **Graphical Rendering:** Display sprites for walls, floors, collectibles, and the player.  

---

## Functionality  

- The game uses a `.ber` file as the map.  
- The map must follow specific rules:  
  - Rectangular shape.  
  - Surrounded by walls (`1`).  
  - Contains exactly one player (`P`), one exit (`E`), and at least one collectible (`C`).  
- The player moves with **WASD** keys:  
  - `W` - Move Up  
  - `A` - Move Left  
  - `S` - Move Down  
  - `D` - Move Right  
- The game ends when the player collects all collectibles and reaches the exit.  

---

## Getting Started  

### Prerequisites  

- A working C compiler, such as `gcc`.  
- A UNIX-like operating system (Linux, macOS).  
- The **MiniLibX** library (provided with the project).  

### Installation  

1. Clone the repository:  
   ```bash  
   git clone https://github.com/mkatfi/so_long.git  
   cd so_long  
   ```  

2. Build the program:  
   ```bash  
   make  
   ```  

   This will create an executable called `so_long`.  

---

## Usage  

1. Run the program with a valid `.ber` map file:  
   ```bash  
   ./so_long maps/example.ber  
   ```  

2. Use **WASD** keys to move the player character.  

3. Collect all collectibles (`C`) and reach the exit (`E`) to win!  

---

## Map Format  

- The map must be a valid `.ber` file and follow these rules:  
  - The map must be rectangular.  
  - Surrounded by walls (`1`).  
  - Must contain:  
    - **1 Player** (`P`)  
    - **1 Exit** (`E`)  
    - **At least 1 Collectible** (`C`)  
- Example of a valid map:  
  ```
  111111111111111111111111111111111111111111111111111
  1E0000000C000000000000C00C01111C0000000000000000001
  1000000000000000C1100000000111100000000C00000000001
  111111111111111001111000C00000000111111110000100001
  1C0CCCC000000000011C0000000111110000000000011111111
  111111111111011100000001111111111000000000111000001
  1C0000000000011100001111111C00000011111100000000CP1
  111111111111111111111111111111111111111111111111111  
  ```  

---

## Project Structure  

| File                  | Description                                      |  
|-----------------------|--------------------------------------------------|  
| `so_long.c`           | Main entry point of the program.                 |  
| `map_parser.c`        | Functions for parsing and validating the map.    |  
| `rendering.c`         | Functions for rendering the map and sprites.     |  
| `player_controls.c`   | Handle player movements and events.              |  
| `so_long.h`           | Header file with function prototypes.            |  

---

## Bonus Features  

- **Enemy Movements:** Add enemies that move across the map, making the game more challenging.  
- **Animations:** Animate sprites for a more dynamic and engaging experience.  
- **Multiple Maps:** Allow players to choose between multiple maps.  

---

## Testing  

To test the game with a sample map:  

1. Create a valid map file (`example.ber`).  
2. Run the program:  
   ```bash  
   ./so_long maps/example.ber  
   ```  

You can also try edge cases, such as invalid maps, missing elements, or broken walls, to test the error handling.  
