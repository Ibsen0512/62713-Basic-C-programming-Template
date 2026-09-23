#include <stdio.h>

int main(void)
{

    // Demo Salary-Calculator
    // Sources:
    // https://www.w3schools.com/c/c_while_loop.php
    // https://www.w3schools.com/c/c_operators_comparison.php

    int nH, hR;
    int Salary;

    printf("Enter the number of worked hours \n");
    scanf("%d", &nH);

    while (nH > 0)
    {
        printf("\nEnter the hourly rate: \n");
        scanf("%d", &hR);

        if (nH <= 37)
        {
            /* code */
            Salary = nH * hR;
            printf("This employees Salary is: \n");
            printf("%d", Salary);
        }
        else if (nH > 37)
        {
            /* code */
            Salary = (37 * hR) + (nH - 37) * (1.5 * hR);
            printf("This employees Salary is: \n");
            printf("%d", Salary);
        }
    }

    return 0;
}