#include <stdio.h>
int main()
{
    int n, sum;
    printf("enter the 5-digit number\n");
    scanf("%d", &n);

    int a, b, c, d, e, f;

    a = (n / 10000);
    b = (n % 10000 / 1000) * 10;
    c = (n % 10000 % 1000 / 100) * 100;
    d = (n % 10000 % 1000 % 100 / 10) * 1000;
    e = (n % 10000 % 1000 % 100 % 10) * 10000;

    sum = a + b + c + d + e;

    printf("Reverse=%d\n", sum);

    if (sum == n)
    {
        printf("Equal\n");
    }

    else
    {
        printf("Not Equal");
    }

    return 0;
}