#include <stdio.h>
int main()
{
    int l, b;
    int a = 0, p = 0;

    printf("enter the value of length and breadth\n");
    scanf("%d %d", &l, &b);

    a = l * b;
    p = 2 * (l + b);

    if (a > p)
    {
        printf("area=%d  \ngreater than\n perimeter=%d", a, p);
    }

    else
    {
        printf("perimeter=%d \ngreater \nthan area=%d", p, a);
    }
    return 0;
}