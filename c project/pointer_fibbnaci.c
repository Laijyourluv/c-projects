// 1,1,2,3,5,8,13,21,34

#include <stdio.h>
int main()
{
    int n, i;
    int c, a, b;

    printf("Enter the number\n");
    scanf("%d", &n);

    int *s;
    s = &a;
    *s = 1;

    int *q;
    q = &b;
    *q = 0;

    int *
        p;
    p = &c;

    for (i = 0; i <= n; i++)
    {
        *p = *s + *q;

        printf("c=%d\n", *p);
        *s = *q;
        b = *p;
    }

    return 0;
}