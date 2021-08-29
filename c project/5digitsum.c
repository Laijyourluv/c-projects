#include <stdio.h>

int main()
{
    int n;
    int a = 0, b = 0, c = 0, d = 0, e = 0, t = 0;

    printf("enter 5-digit value\n");
    scanf("%d", &n);
    a = n / 10000;
    b = n % 10000 / 1000;
    c=n%10000%1000/100;
    d=n%10000%1000%100/10;
    e=n%10000%1000%100%10;
    t=a+b+c+d+e;
    printf("Sum of any 5-digit=%d\n",t);
    

    return 0;
}