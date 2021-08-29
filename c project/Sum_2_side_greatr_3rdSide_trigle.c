#include <stdio.h>
int main()
{
    int x, y, z, s;

    printf("Enter three Side \n");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y && x > z)
    {
        s = x;
        printf("X is greater\n");
    }

    else if (y > z)
    {
        s = y;
        printf("y is greater\n");
    }

    else
    {
        s = z;
        printf("z is greater\n");
    }

    if (x + y > s)
    {

        printf("VALID \n");
    }

    else if (y + z > s)
    {
        printf("VALID \n");
    }

    else if (z + x > s)
    {
        printf("VALID \n");
    }

    else
    {
        printf("NOT VALID");
    }

    return 0;
}