#include <stdio.h>
int main()
{
    int n, i = 1, d, c = 0, b = 0, a = 1;

    printf("Enter the number \n");
    scanf("%d", &n);

    while (i <= n)
    {
        d = a + b + c;
        a = b;
        b = c;
        c = d;
        printf("i=%d\n", d);
        i = i + 1;
    }

    return 0;
}