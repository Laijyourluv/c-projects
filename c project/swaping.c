#include <stdio.h>
int main()
{
    int x, y, swap = 0;

    printf("enter the value of x and y\n");
    scanf("%d %d", &x, &y);

    swap = x;
    x = y;
    y = swap;

    printf("after swaping \nx=%d \ny=%d\n", x, y);

    return 0;
}