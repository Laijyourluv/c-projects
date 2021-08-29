#include <stdio.h>

int main()
{
    int x, y, m;

    printf("enter two value x and y\n");
    scanf("%d %d", &x, &y);

    m = x * y;

    printf("multiplication=%d", m);
    return 0;
}