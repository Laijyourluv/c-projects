#include <stdio.h>
int main()
{
    int n;

    int a = 0, b = 0, c = 0, d = 0, e = 0, R = 0, F = 0;
    int x = 0, y = 0, z = 0, u = 0, s = 0;
    printf("enter the 5-digit value\n");
    scanf("%d", &n);

    a = n / 10000;
    b = n % 10000 / 1000;
    c = n % 10000 % 1000 / 100;
    d = n % 10000 % 1000 % 100 / 10;
    e = n % 10000 % 1000 % 100 % 10;

    //  multiply value for reversing

    x = e * 10000;
    y = d * 1000;
    z = c * 100;
    u = b * 10;
    s = a;

    R = x + y + z + u + s;

    printf("Reverse=%d", R);

    return 0;
}