#include <stdio.h>
void main()
{
    int i, r, k = 0, n;
    int *p;
    p = &n;

    int *s;
    s = &r;

    int *l;
    l = &k;

    printf("Enter the number\n");
    scanf("%d", p);
    i = *p;
    while (*p != 0)
    {
        *s = *p % 10;
        *l = *s + *l * 10;
        *p = *p / 10;
    }

    if (*l == i)
    {
        printf(" %d is  Pallendrome\n", i);
    }

    else
    {
        printf(" %d is Not Pallendrome\n", i);
    }
}