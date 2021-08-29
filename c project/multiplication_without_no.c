#include <stdio.h>
int main()
{
    int x, y, i = 1, r = 0;

    printf("Enter the number x and y\n ");
    scanf("%d %d", &x, &y);

    while (i <= y)
    {
        r = x + r;
        i=i+1;
    }
    printf("Multiplication x*y=%d\n", r);
    return 0;
}