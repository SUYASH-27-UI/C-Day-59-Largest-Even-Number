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
