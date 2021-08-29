#include <stdio.h>
int main()
{
    int a;
    int h = 0, f = 0, t = 0, y = 0, x = 0;
    printf("enter the amount \n");
    scanf("%d", &a);
    h = a / 200;
    f = a % 200 / 100;
    t = a % 200 % 100 / 50;
    x = a % 200 % 100 % 50 / 10;
    y = a % 200 % 100 % 50 % 10 / 5;
    printf("200 Notes=%d\n", h);
    printf("100 NOTES=%d\n", f);
    printf("50 Notes=%d\n", t);
    printf("10 Notes=%d\n", x);
    printf("5 Notes=%d\n", y);
    return 0;
}