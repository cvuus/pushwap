<h1 align="center">
	🔗 pushswap
</h1>

---

## 💡 About the project

> _This project aims to sort data on a stack, with a limited set of instructions, using the lowest possible number of actions._
> _Given a set of integers, sort it using a predefined set of instructions using two stacks. The instruction set is defined below. This program outputs a program in push_swap instructions that sorts the input integers._


## 🛠️ Explanation

## Instruction set

For the following instructions, if the instruction is not possible, the part of
it that can't be executed won't.

| Code  | Instruction                         | Action                                                 |
| ----- | ----------------------------------- | ------------------------------------------------------ |
| `sa`  | swap a                              | swaps the 2 top elements of stack a                    |
| `sb`  | swap b                              | swaps the 2 top elements of stack b                    |
| `ss`  | swap a + swap b                     | both `sa` and `sb`                                     |
| `pa`  | push a                              | moves the top element of stack b at the top of stack a |
| `pb`  | push b                              | moves the top element of stack a at the top of stack b |
| `ra`  | rotate a                            | shifts all elements of stack a from bottom to top      |
| `rb`  | rotate b                            | shifts all elements of stack b from bottom to top      |
| `rr`  | rotate a + rotate b                 | both `ra` and `rb`                                     |
| `rra` | reverse rotate a                    | shifts all elements of stack a from top to bottom      |
| `rrb` | reverse rotate b                    | shifts all elements of stack b from top to bottom      |
| `rrr` | reverse rotate a + reverse rotate b | both `rra` and `rrb`                                   |


## Data Strucutre
Stack A and B are represented as a circular linked list where the tail points to the head.
Thus, implementing commands like rotate and reverse rotate is fascillitated.


## My version of the algorithm

The algorithm is based on a QuickSort algorithm and until Stack A is small enough to be sorted efficiently.
Before starting the algorithm  Stack A is indexed with the "true" indexes of all values in list.

1. Pivot element is defined. 
    size < 300 list splitted in 4 parts
    size > 300 list spliited in 7 part
   
3. All elements in list > pivot element are pusehd to B
    element > pivot/2 pushed to the top of Stack B
    element < pivot/2 pushed to the bottom of Stack B
   
5. If Stack A contais more than 5 element 1 & 2 is repeated
   
7. If Stack A contains less than 5 elements, list A is sorted
   
9. Stack B finds the next smallest element either at the top or bottom and pushes it to Stack A
10. 
11. Repeat until Stack B is empty and A is sorted



## Efficiency

My push_swap sorts

    3 numbers with maximum 3 instructions,
    4 numbers with maximum 7 instructions,
    5 numbers with maximum 11 instructions,
    100 numbers with maximum 700 instructions => 5/5 points,
    500 numbers with maximum 5000 instructions => 5/5 points.

The algorithm passes the mandatory part with maximum number of points.
