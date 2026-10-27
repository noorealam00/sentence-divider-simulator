# Simulate a Sentence Divider

A C-based mini project for **CSE360: Computer Architecture** that divides a paragraph into sentence-like segments using punctuation marks. It also displays a conceptual hardware-processing simulation to illustrate memory access, CPU instruction execution, ALU comparisons, and control flow.

## Project Overview

The program accepts a paragraph from the user, scans its characters sequentially, and identifies configured delimiters such as `.`, `!`, `?`, `;`, and `:`. It also handles repeated punctuation marks such as `!!!`, `???`, and `...`.

To connect the implementation with Computer Architecture, the program displays simulated messages representing memory access, the fetch-decode-execute cycle, ALU comparisons, and Control Unit decisions.

**Note:** The hardware messages are conceptual simulations printed by the program. They do not directly monitor the physical CPU's internal registers, ALU, or Control Unit.

## Objectives

- Implement a sentence divider using the C programming language.
- Understand character arrays and sequential data processing.
- Demonstrate conditional statements, loops, and character comparisons.
- Connect high-level program execution with fundamental Computer Architecture concepts.

## Technologies Used

- C programming language
- Standard C libraries: `stdio.h` and `ctype.h`
- A C compiler, such as GCC

## How to Run

1. Install a C compiler, such as GCC.
2. Download or clone this repository.
3. Open a terminal in the project folder.
4. Compile the source code:

   ```bash
   gcc sentence_divider.c -o sentence_divider
   ```

5. Run the program.

   **Windows:**
   ```bash
   sentence_divider.exe
   ```

   **Linux/macOS:**
   ```bash
   ./sentence_divider
   ```

6. Enter a paragraph and observe the sentence-divider output and simulated hardware messages.

## Hardware Concepts Demonstrated

- **Memory:** The paragraph is stored in a character array.
- **Sequential access:** Characters are processed one by one.
- **CPU instruction cycle:** Fetch, decode, and execute are illustrated conceptually.
- **ALU:** Character comparisons and index arithmetic are related to ALU operations.
- **Control flow:** Conditional decisions determine when a sentence boundary is detected.
- **Registers:** The index and sentence counter are displayed as conceptual examples of temporary processing state.

## Limitations

The program uses predefined punctuation rules rather than advanced linguistic analysis. Abbreviations, decimal numbers, and complex quotation structures may not always be handled correctly. The hardware messages are educational representations rather than measurements of actual processor activity.

## Future Improvements

- Improve recognition of abbreviations and decimal numbers.
- Add file input and more detailed text statistics.
- Improve quotation and bracket handling.
- Develop an assembly-language version to explore low-level execution.

## Academic Context

**Course:** CSE360 — Computer Architecture  
**Project:** Simulate a Sentence Divider  
**Language:** C
