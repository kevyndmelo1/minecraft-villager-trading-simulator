# Minecraft Villager Trading Simulator

A simple terminal-based game developed in C as an academic project.

The player collects resources, trades with villagers, purchases special items, and tries to complete the game's objectives.

This project was developed to practice C programming fundamentals and gradually apply modular code organization, input validation, build automation, and Git/GitHub.

---

## Features

- Resource collection
- Player inventory
- Trading system
- Blacksmith shop
- Library shop
- Diamond Sword purchase
- Mending Book purchase
- Victory condition
- Input validation
- Colored terminal interface

---

## Technologies

- C
- GCC
- Make
- Git
- GitHub

---

## Project Structure

```

minecraft-villager-trading-simulador/
│
├── include/
│   ├── cores.h
│   ├── entrada.h
│   ├── inventario.h
│   ├── menus.h
│   └── recursos.h
│
├── src/
│   ├── entrada.c
│   ├── inventario.c
│   ├── main.c
│   ├── menus.c
│   └── recursos.c
│
├── .gitignore
└── Makefile

```

---

| File           | Responsibility                                     |
| -------------- | -------------------------------------------------- |
| `main.c`       | Initializes the game and player inventory          |
| `inventario.c` | Handles inventory display and victory verification |
| `recursos.c`   | Handles resource collection                        |
| `menus.c`      | Handles the main menu, blacksmith, and library     |
| `entrada.c`    | Handles numeric input validation                   |
| `include/`     | Contains header files and function declarations    |

---


How to Run
Requirements
GCC
Make
MSYS2 UCRT64 or another compatible C environment

The project was developed and tested using GCC through MSYS2 UCRT64 on Windows.

---

```
Concepts Practiced

This project was developed to practice:

struct
Pointers
Functions and function prototypes
Header (.h) and source (.c) files
Modular code organization
Conditional statements and loops
Input validation
Basic build automation with Make
GCC compilation
Git and GitHub workflow
```

---


Project Evolution

The project was gradually improved as new concepts were learned.

Key improvements included:

Refactoring the original code into multiple C modules.
Separating declarations into header files.
Configuring GCC and the UCRT64 environment.
Adding a Makefile to simplify compilation.
Implementing input validation.
Preventing negative resource values.
Using Git commits to document the project's development.

---

Notes

This is an academic and learning-oriented project focused on practicing C fundamentals, modularization, and basic development workflow.

The game's interface is in Portuguese.

Author

Kevyn
