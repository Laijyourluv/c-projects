#include <stdio.h>
int main()
{
    int n;
    int a = 0, b = 0, c = 0;

    printf("enter 3-digit value\n");

    scanf("%d", &n);

    a = n / 100;
    b = n % 100 %10;
    c = a + b;
    printf("sum 1st and last value=%d", c);
    return 0;
}