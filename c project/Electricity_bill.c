#include <stdio.h>
int main()
{
    int u, c, t;
    int s = 0;

    printf("enter the CAONSUMING UNTIT \n");
    scanf("%d", &u);

    if (u <= 50)
    {
        c = u * 0.50;
        printf("Charge for 50 unit =%d\n", c);
    }

    else if (u <= 150)
    {
        c = (u - 50) * 0.75 + 25;
        printf("Charge for 100 unit =%d\n", c);
    }

    else if (u <= 250)
    {
        c = (u - 150) * 1.20 + 25 + 75;
        printf("Charge for 100 unit =%d\n", c);
    }

    else if (u > 250)
    {
        c = (u - 250) * 1.50 + 25 + 75 + 120;
        printf("Charge of unit above 250 =%d\n", c);
    }

    s = (20 * c) / 100;

    t = s + c;

    printf("Total charge(20percent+charge) %d+%d=%d", s, c, s + c);

    return 0;
}