# Basic Calculator
[![Ask DeepWiki](https://devin.ai/assets/askdeepwiki.png)](https://deepwiki.com/mehmedk-dev/Basic_calculator)

This repository contains a simple, menu-driven console application for performing basic arithmetic operations. Implemented in C++, it provides a straightforward command-line interface for addition, subtraction, multiplication, and division.

## Features

*   **Addition:** Adds two integers.
*   **Subtraction:** Subtracts one integer from another.
*   **Multiplication:** Multiplies two integers.
*   **Division:** Divides one integer by another, with a check for division by zero.
*   **Interactive Menu:** A continuous loop that presents the user with options until they choose to exit.

## Prerequisites

*   **Microsoft Visual Studio:** The project is configured as a Visual Studio solution (`.slnx`).
*   A C++ compiler that supports the C++20 standard, as configured in the project file.

## Building and Running

1.  Clone the repository to your local machine:
    ```bash
    git clone https://github.com/mehmedk-dev/basic_calculator.git
    ```
2.  Navigate to the cloned directory and open `basic_calculator.slnx` with Visual Studio.
3.  Select a solution configuration (e.g., `Debug` or `Release`) and platform (e.g., `x64`).
4.  Build the solution by selecting **Build > Build Solution** from the menu or by pressing `F7`.
5.  Run the application by selecting **Debug > Start Without Debugging** or by pressing `Ctrl+F5`.

## Usage

Once the application is running, a menu will be displayed in the console.

```
1 - Addition numbers
2 - Subtract numbers
3 - Multiply numbers
4 - Divide numbers
0 - Exit
Choose:
```

1.  Enter the number corresponding to the desired operation (1-4) or 0 to exit.
2.  If you choose an operation, you will be prompted to enter two numbers.
3.  The program will calculate and display the result.
4.  The menu will reappear for the next calculation.

### Example

```
1 - Addition numbers
2 - Subtract numbers
3 - Multiply numbers
4 - Divide numbers
0 - Exit
Choose: 
3
Enter first number: 7
Enter second number: 6
Total is: 42
_____________________
1 - Addition numbers
2 - Subtract numbers
3 - Multiply numbers
4 - Divide numbers
0 - Exit
Choose: 
0
Exiting program....