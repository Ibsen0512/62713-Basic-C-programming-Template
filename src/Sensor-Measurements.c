#include <stdio.h>

int main(void)
{

    // Comparing sensor measurements:

    int sv, vt;

    printf("Enter highest voltage ever measured by a sensor and the voltage measured today \n");
    scanf("%d %d", &sv, &vt);

    printf("highest voltage ever measured = %d V, voltage measured today = %d V\n", sv, vt);

    if (vt > sv)
    {
        printf("New Record Congratugsdgdlations!!!\n");
        sv = vt;
        printf("New highest voltage: %d V", sv);
    }
    else if (vt <= sv)
    {
        printf("No new record try again.");
    }

    return 0;
}