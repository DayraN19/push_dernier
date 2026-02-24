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