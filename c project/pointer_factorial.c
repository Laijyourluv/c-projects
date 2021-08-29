#include <stdio.h>

int fact(int n, int *q)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        *q = *q * i;
    }
    return *q;
}
int main()
{
    int n;
    // int *p;
    // p = &n;
    int f = 1;
    int *q;
    // q = &f;

    printf("Enter the number for finding factorial\n");
    scanf("%d", &n);

    *q = fact(n, &f);
    printf("factorial of n=%d is %d\n", n, f);
}