
#include <stdio.h>

int main()

{
    int x, y, z;

    printf("enter the three numbers x,y,z\n");
    scanf("%d %d %d", &x, &y, &z);

    int sum;
    sum = x + y + z;

    printf("sum= %d\n", sum);

    if (sum != 180)
    {
        printf("not valid\n");
    }

    else
    {
        printf("valid\n");
    }

    return 0;
}