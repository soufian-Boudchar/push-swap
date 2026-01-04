*This project has been created as part of the 42 curriculum by sboudcha.*

# Push_swap

## Description
**Push_swap** is a 42 school algorithmic project where we must sort a given list of random integers with a limited set of instructions, using the lowest possible number of actions.

The project involves two stacks (Stack A and Stack B) and a specific set of operations (swap, push, rotate, and reverse rotate). The goal is to write a C program called `push_swap` which calculates and displays on the standard output the smallest program, made of Push swap language instructions, that sorts the integers received as arguments.

## Algorithm Used: Chunk Sort (Optimized)
For this project, I implemented an optimized sorting algorithm often referred to as **Chunk Sort** (or Range Sort), specifically tailored to handle 100 and 500 numbers efficiently.

### How it works:
1.  **Indexing:** First, values are mapped to their rank (index) to handle any range of integers (including negatives) easily.
2.  **Push to B (The "Butterfly" effect):**
    * The algorithm defines a dynamic "range" or "chunk" (e.g., 15 for 100 numbers, 35 for 500 numbers).
    * It scans Stack A for numbers within the current range `[counter, counter + range]`.
    * If a number is found:
        * It is pushed to Stack B (`pb`).
        * **Optimization:** If the number is in the lower half of the chunk, Stack B is rotated (`rb`). This keeps smaller numbers at the bottom and larger numbers at the top, forming a sorted distribution (butterfly shape) that speeds up the return phase.
    * If no number in the current range is at the top of A, the algorithm intelligently decides to rotate A (`ra`) or reverse rotate A (`rra`) based on which valid number is closer.
3.  **Push back to A:**
    * Once Stack A is empty, Stack B contains elements roughly sorted.
    * The algorithm simply finds the maximum value in B, rotates it to the top (using the shortest path), and pushes it back to A (`pa`).

## Instructions

### Compilation
The project includes a Makefile. You can compile the program using:

```bash
make

```

### Execution

Run the program with a list of integers as arguments:

```bash
./push_swap 2 1 3 6 5 8

```

### Testing & Benchmark

To verify the number of instructions (should be around < 700 for 100 numbers and < 5500 for 500 numbers):

```bash
# Example for 100 numbers
ARG=$(shuf -i 1-100 -n 100 | tr '\n' ' '); ./push_swap $ARG | wc -l

# Example for 500 numbers
ARG=$(shuf -i 1-500 -n 500 | tr '\n' ' '); ./push_swap $ARG | wc -l

```

To verify that the output actually sorts the list (using the checker):

```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_OS $ARG

```

## Resources

* **Sorting Algorithms Visualized:** Various online visualizers were used to understand stack manipulation.
* **Complexity Analysis:** Studied Big O notation to ensure the algorithm meets the efficiency requirements.

### AI Usage

As per the subject requirements, Artificial Intelligence tools were used in the development of this project.

* **Tools Used:** Gemini (Google).
* **Context:**
* **Concept Explanation:** AI was used to explain the differences between Radix Sort and Chunk/Butterfly algorithms to choose the most efficient approach for the constraints.
* **Logic Debugging:** AI helped identify edge cases in the `ft_range_finder` logic to optimize the search for the next number in Stack A.
* **Documentation:** AI assisted in drafting and formatting this README file to ensure it complies with the updated project submission guidelines.