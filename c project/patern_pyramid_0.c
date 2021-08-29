#include <stdio.h>
void main()
{
    int n, i;

    printf("Enter the number \n");
    scanf("%d", &n);
    int a = 1, j = 2, p;
    for (int i = 1; i <= n; i++)
    {
        // if (i == 1)
        // {
        //     a = a * i;
        // }

        if (i > 1)
        {
            a = a * j;
        }

        printf("%d\n", a);

        // for (p = 1; p <= a; p++)
        // {

        //     printf(" *");
        // }
        // printf("\n");
    }
    int k, l = 2, an = 1;
    for (k = 1; k <= n; k++)
    {
        if (k == 1)
        {
            an = an * k;
        }
        if (k > 1)
        {
            an = an * l;
        }
    }

    // printf("%d\n", an);
    int m, sp;
    int x = 1, z = 2;
    int xx, v, ll;
    for (m = 1; m <= n; m++)
    {
        if (m == 1)
        {
            x = x * m;
        }
        if (m > 1)
        {
            x = x * z;
        }

        sp = an - x;
        // printf("%d", sp);
        // printf(" ");
        // printf("\n");

        for (v = 1; v <= sp; v++)
        {

            printf(" ");
        }
        for (xx = 1; xx <= x; xx++)
        {
            printf("#");
        }
        for (ll = 1; ll <= x; ll++)
        {
            printf("#");
        }

        printf("\n");
    }
}
