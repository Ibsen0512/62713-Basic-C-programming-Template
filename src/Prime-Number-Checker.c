#include <stdio.h>

// Demo Prime-Number-Checker incrementation:
// Sources:
// https://www.geeksforgeeks.org/c/c-program-to-check-whether-a-number-is-prime-or-not/

int n;

int main()
{

    printf("Enter positive integer:\n");
    scanf("%d", &n);

    int count = 0;

    if (n <= 1)
    {
        printf("%d is NOT prime", n);
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
                count++;
        }

        if (count == 2)
            printf("%d is prime", n);
        else
            printf("%d is NOT prime", n);
    }

    return 0;
}