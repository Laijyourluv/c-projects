#include <stdio.h>
int main()
{
    int u, c, s = 0, t;

    printf("Enter the Unit \n");
    scanf("%d", &u);

    if (u <= 199)
    {
        c = u * 1.20;
        printf("Charge of 199 unit=%d\n", c);
    }
    else if (u < 400)
    {
        c = (u - 199) * 1.50 + 238.8;
        printf("Charge of 399 unit =%d\n", c);
    }

    else if (u < 600)
    {
        c = (u - 399) * 1.80 + 238.8 + 300;
        printf("charge of 599 unit =%d\n", c);
    }
    else if (u >= 600)
    {

        c = (u - 599) * 2 + 238.8 + 300 + 360;
        printf("charge of  unit above greater than 599 =%d\n", c);
    }

    if (c > 400)
    {
        s = (15 * c) / 100;
        t = c + s;
        printf("Total Charge(15per + actual cahrge) %d+%d=%d", s, c, c + s);
    }

    else if (c > 0)
    {
        t = s + c;
        printf("Total charge (c<400)=%d\n\n", t);
    }
    else
    {
        t = 100;
        printf("Total Minimum charge (unit=0)=%d\n\n", t);
    }
    return 0;
}