# ft_iterative_factorial

## Description

Create an iterative function that calculates the factorial of a given integer.

The function must return the factorial of `nb`. If the input is negative or the factorial result exceeds the range of an `int`, the function must return `0`.

## Function Prototype

```c
int ft_iterative_factorial(int nb);
```

## Understanding Factorial

The factorial of a non-negative integer `n`, written as `n!`, is the product of all positive integers from `n` down to `1`.

**Formula:**

`n! = n × (n - 1) × ... × 2 × 1`

Special case:

`0! = 1`

## Examples

| Input | Output |
|---:|---:|
| 0 | 1 |
| 1 | 1 |
| 4 | 24 |
| 5 | 120 |
| 7 | 5040 |
| -1 | 0 |

## Requirements

- Use an iterative approach (loops, not recursion).
- Return `1` when `nb` is `0` or `1`.
- Return `0` for negative inputs.
- Return `0` if the result exceeds the range of an `int`.
- The function must execute in less than two seconds.

## Example

```c
ft_iterative_factorial(4);  // Returns 24
ft_iterative_factorial(0);  // Returns 1
ft_iterative_factorial(-1); // Returns 0
```

## Compilation

Compile your source file with a test file:

```bash
cc -Wall -Wextra -Werror ft_iterative_factorial.c main.c
```

## Author

1337 / 42 C Programming Exercises