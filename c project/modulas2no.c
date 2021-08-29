#include <stdio.h>
int main()
{
    int x, y, m;

    printf("enter two number x and y \n");
    scanf("%d %d", &x, &y);

    m = x % y;

    printf("modulas=%d", m);

    return 0;
}