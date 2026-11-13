# Terminal Statistics Analyzer

A command-line application written in C that calculates statistical measurements from a user-provided set of integers.

## Features

- Accepts a variable number of integer inputs.
- Validates user input to prevent invalid entries.
- Calculates the sum and mean.
- Finds the minimum and maximum values.
- Sorts the numbers using the Bubble Sort algorithm.
- Calculates the median for both odd and even datasets.
- Calculates the population standard deviation.

## Technologies Used

- **Language:** C
- **Compiler:** Clang
- **Libraries:**
  - `stdio.h`
  - `stdbool.h`
  - `math.h`

## How to Compile and Run

Make sure you have a C compiler installed.

1. Clone this repository:

   ```bash
   git clone git clone https://github.com/shellytsvayberg/terminal-statistics-analyzer.git
   ```

2. Navigate into the project directory:

   ```bash
   cd terminal-statistics-analyzer
   ```

3. Compile the program:

   ```bash
   clang -Wall -Wextra statistics.c -o statistics -lm
   ```

4. Run the program:

   ```bash
   ./statistics
   ```

## Example

```text
How many numbers? (positive integers over 0 ONLY)
5
Enter 5 numbers:
10 20 30 40 50

Sum: 150
Mean: 30.00
Min: 10
Max: 50
Median: 30.00
Standard Deviation: 14.14
```

## What I Learned

Through this project, I practiced:

- Working with arrays and variable-length arrays.
- Using loops and conditional statements.
- Validating user input with `scanf()`.
- Implementing the Bubble Sort algorithm.
- Performing statistical calculations.
- Working with floating-point numbers and mathematical functions.

## Future Improvements

- Add support for decimal numbers.
- Implement additional sorting algorithms.
- Improve memory management for larger datasets.

---

**Status:** Completed

**Language:** C