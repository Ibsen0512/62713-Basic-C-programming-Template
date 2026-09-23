#include <stdio.h>

int main(void)
{

    // Demo Salary-Calculator
    // Sources:
    // https://www.w3schools.com/c/c_while_loop.php
    // https://www.w3schools.com/c/c_operators_comparison.php

    int nH;
    float hR, Salary;

    do
    {
        /* code */
        printf("\nEnter the number of worked hours \n");
        scanf("%d", &nH);

        // Stop programmet hvis nH er negativ
        if (nH < 0)
        {
            break;
        }

        printf("Enter the hourly rate: \n");
        scanf("%f", &hR);

        if (nH <= 37)
        {
            /* code */
            Salary = nH * hR;
            printf("This employees Salary is: \n");
            printf("%.2f", Salary);
        }
        else if (nH > 37)
        {
            /* code */
            Salary = (37 * hR) + (nH - 37) * (1.5 * hR);
            printf("This employees Salary is: \n");
            printf("%.2f", Salary);
        }
    } while (nH >= 0);

    return 0;
}