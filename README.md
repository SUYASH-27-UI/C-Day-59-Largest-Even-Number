# C-Day-59-Largest-Even-Number
# C Day 59 - Largest Even Number

This program takes multiple numbers from the user and finds the largest positive even number.

## Example Input

```text id="input59"
Enter how many numbers: 6
Enter number 1: 15
Enter number 2: 24
Enter number 3: 10
Enter number 4: 35
Enter number 5: 18
Enter number 6: 12
```

## Output

```text id="output59"
Largest even number = 24
```

## Concepts Used

* `for` loop
* `if-else`
* Logical AND operator `&&`
* Modulus operator `%`
* Comparison operators
* Variables
* User input

## How It Works

1. The program asks how many numbers the user wants to enter.
2. A `for` loop takes the numbers one by one.
3. The `%` operator checks whether the number is even.
4. The program compares the even number with the current largest even number.
5. If it is larger, `largest_even` is updated.
6. Finally, the largest even number is displayed.

## C Code

```c id="code59"
#include <stdio.h>

int main()
{
    int n, number;
    int largest_even = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number % 2 == 0 && number > largest_even)
        {
            largest_even = number;
        }
    }

    if (largest_even == 0)
    {
        printf("No positive even number found.");
    }
    else
    {
        printf("Largest even number = %d", largest_even);
    }

    return 0;
}
```

## Sample Output

```text id="sample59"
Enter how many numbers: 6
Enter number 1: 15
Enter number 2: 24
Enter number 3: 10
Enter number 4: 35
Enter number 5: 18
Enter number 6: 12

Largest even number = 24
```

## Goal

The goal of this project is to practice loops, conditions, logical operators, and finding the largest even number in C.
