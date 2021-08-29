#include <stdio.h>
#include <conio.h>

int main()
{

    int gs, bs, hr, da;

    printf("Enter the Basic Salary\n");
    scanf("%d", &bs);

    if (bs <= 10000)
    {
        hr = (20 * bs) / 100;
        da = (80 * bs) / 100;
        gs = hr + da;
        printf("Gross salary= %d ", gs);
    }

    else if (bs <= 20000)
    {
        hr = (25 * bs) / 100;
        da = (90 * bs) / 100;
        gs = hr + da;
        printf("Gross salary= %d ", gs);
    }

    else if (bs > 20000)
    {
        hr = (30 * bs) / 100;
        da = (95 * bs) / 100;
        gs = hr + da;
        printf("Gross salary= %d\n ", gs);
    }

    return 0;
}
