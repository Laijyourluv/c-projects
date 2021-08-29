#include <stdio.h>
int main()
{

    int n, sum;
    int a, b, c, d, e;

    printf("enter 5-digit number\n");
    scanf("%d", &n);

    a = (n / 10000 + 1) * 10000;
    b = (n % 10000 / 1000 + 1) * 1000;
    c = (n % 10000 % 1000 / 100 + 1) * 100;
    d = (n % 10000 % 1000 % 100 / 10 + 1) * 10;
    e = (n % 10000 % 1000 % 100 % 10 + 1);

    sum = a + b + c + d + e;

    printf("Number on addding 1 =%d\n", sum);

    return 0;
}