#include <stdio.h>
int main()
{
    int n, a = 1, b = 0, c, i = 1;

    printf("Enter the number\n");
    scanf("%d", &n);

    while (i <= n)
    {

        c = a + b;
        a = b;
        b = c;

        printf("C=%d\n", c);
        i = i + 1;
    }

    return 0;
}