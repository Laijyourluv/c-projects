#include <stdio.h>
int main()
{
    int n, s;
    int m, c = 0;

    printf("Enter the number \n");
    scanf("%d", &n);
    s = n;

    while (n > 0)
    {
        m = n % 10;
        c = c + (m * m * m);
        n = n / 10;
    }

    if (c == s)
    {
        printf("Armstrong=%d\n", s);
    }
    else
    {
        printf("Not Armstrong=%d\n", c);
    }

    return 0;
}