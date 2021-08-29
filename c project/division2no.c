#include <stdio.h>;
int main()
{
    int x, y, d;

    printf("enter the value x AND y\n");
    scanf("%d %d", &x, &y);

    d = x / y;

    printf("division=%d", d);

    return 0;
}