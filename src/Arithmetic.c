#include <stdio.h>

int main(void)
{

    // Demo Arithmetic - Two integers and prints:

    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("a = %d, b = %d\n", a, b);
    printf("SUM:\n");
    printf("%d", a + b);

    printf("\nDifference:\n");
    if (a > b)
    {
        printf("%d", a - b);
    }
    else if (a < b)
    {
        printf("%d", b - a);
    }
    else
    {
        printf("No diff.");
    }

    printf("\nQuotient:\n");
    int Quotient = a / b;
    printf("%d\n", Quotient);

    printf("Remainder\n");
    int remainder = a % b;
    printf("%d", remainder);
    return 0;
}