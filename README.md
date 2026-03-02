*This project has been created as part of the 42 curriculum by bgranier and lpepin-l.*

# push_swap

## Description

**push_swap** is a sorting algorithm project from the 42 curriculum.  
The goal is to sort a stack of integers using a **limited set of operations** and an auxiliary stack **B**, while minimizing the total number of operations.

The program receives a list of integers, initializes them in stack **A**, and outputs a sequence of operations to sort the stack in ascending order.  

This implementation includes a **custom adaptive strategy** that selects the most efficient internal sorting method based on the **disorder** of the input stack.

---

## Instructions

### Compilation

```bash
make
./push_swap --flags "numbers"
```

## Resources

- [VisuAlgo](https://visualgo.net/en/sorting) – Helping understand how sorting algorithms work and the difference between them
- [Explanation of Push_Swap](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)
- Articles on stack-based sorting algorithms such as radix sort and insertion sort
- Various online tutorials explaining the push_swap constraints and expected operations

**AI Usage:**
AI was used in the making of this README.md, and to understand the algorithms provided by the subject (as complement to the website visited).

## Algorithms & Design

The objective of **push_swap** is to sort a stack of integers with the fewest possible operations using a second stack. To meet this requirement the program supports multiple internal sorting routines and chooses between them based on the input characteristics:

1. **Simple sort** – for very small stacks (<= 3 elements), a handful of hard‑coded swaps/rotations suffice. This is the fastest path and guarantees an optimal sequence for tiny inputs.
2. **Medium sort** – designed for moderately sized stacks (typically <= 100), this method partitions the stack into chunks based on their index and moves elements to stack B in groups, then reinserts them in order. It reduces the number of rotations by operating on ranges rather than individual elements.
3. **Complex sort** – essentially a radix sort on the indexed values. All numbers are first assigned a zero‑based index representing their sorted order; the algorithm then processes bits from least to most significant, pushing and pulling elements between stacks according to the current bit. This yields O(n log n) behaviour and scales well for large inputs.
4. **Adaptive strategy** – rather than choosing a routine solely by size, the program computes a *disorder* metric that estimates how far the stack is from sorted. A nearly‑sorted input can be handled more efficiently by the simple or medium methods, while a highly disordered input triggers the complex radix approach. This dynamic selection reduces the average number of operations across random inputs.

Additional helpers include routines for indexing the stack, moving the minimum element to the top, and checking for duplicates or invalid arguments. Validation occurs before any sorting begins; if the input contains non‑numeric values, out‑of‑range integers, or repeated numbers, the program prints "Error" and exits.

The choice of these algorithms balances implementation simplicity with operation count. Radix sort is chosen for its predictable performance on large datasets, while the chunk‑based medium sort and specialized small‑size handling ensure efficiency on smaller inputs. The adaptive layer ties them together and allows the program to respond intelligently to different input distributions.
