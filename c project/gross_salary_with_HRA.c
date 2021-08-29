#include <stdio.h>
int main()
{
    int s, hr, da;

    printf("Enter the salary \n");
    scanf("%d", &s);

    if (s >= 1500)
    {
        hr = 500;
        da = (98 * s) / 100;
        printf("Gross salary %d+%d=%d", hr, da, hr + da);
    }

    else
    {
        hr = (10 * s) / 100;
        da = (90 * s) / 100;
        printf("Gross salary %d+%d=%d", hr, da, hr + da);
    }

    return 0;
}