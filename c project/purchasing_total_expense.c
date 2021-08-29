#include <stdio.h>
int main()
{
    int q, p, t, d;

    printf("Enter the  quantity of item\n");
    scanf("%d", &q);

    printf("Enterr the price/item\n");
    scanf("%d", &p);

    t = p * q;

    if (q > 1000)
    {
        d = t - (10 * t) / 100;
        printf("Total Bill= %d", d);
    }
    else
    {
        printf("Total Bill=%d", t);
    }

    return 0;
}