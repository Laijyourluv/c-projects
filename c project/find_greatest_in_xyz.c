#include <stdio.h>
int main()
{
    int x, y, z;

    printf("enter the 3-Numbers x y and z \n");
    scanf("%d %d %d", &x, &y, &z);

    // if (x == y && x == z)

    //     printf("x=y=z\n");

    // else if (x == y && x != z)

    //     printf("x=y!=z\n");
    // else if (x == z && x != y)

    //     printf("x=z!=y\n");

    // else if (y == x && y != z)
    // {
    //     printf("y=x!=z\n");
    // }
    // else if (y == z && y != x)
    // {
    //     printf("y=z!=x\n");
    // }

    if (x > y)
    {

        if (x > z)
        {
            printf("x is greater\n");
        }
    }

    if (y > x)

    {

        if (y > z)
        {
            printf("y is greater \n");
        }
    }

    if (z > x)

    {
        if (z > y)
        {
            printf("z is greater \n");
        }
    }

    return 0;
}