#include <stdio.h>
int main()
{
    int x, y, z;
    int s = 0, a = 0, b = 0;

    printf("Enter the Three Sides X,Y,Z\n");
    scanf("%d %d %d", &x, &y, &z);

    if (x == y && y == z && z == x)
    {
        printf("Equilateral Triangle\n");
    }

    else if (x == y || x == z || y == z)
    {
        printf("Isoscles Triangle\n");
    }

    else if (x != y || y != z || z != x)
    {
        printf("Scalene triangle\n");
    }

    s = z * z;

    s == (x * x) + (y * y);

    a = y * y;
    a == (z * z) + (x * x);

    b = x * x;
    b == (z * z) + (y * y);

    if (s == (x * x) + (y * y) || a == (z * z) + (x * x) || b == (z * z) + (y * y))
    {
        printf("\nOR\tRIGHT triangle\n ");
    }
    else
    {
        printf("\nBut\t Not RIGHT triangle\n ");
    }

    // printf("Value of s=%d\n", s);

    // printf("Value of a=%d\n", a);

    // printf("Value of b=%d\n", b);

    return 0;
}