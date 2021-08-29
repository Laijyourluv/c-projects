#include <stdio.h>
int main()
{

    int a, b, c, d, e;
    float per;

    printf("enter the marks of 5 subjects a,b,c,d,e,\n");
    scanf("%d %d %d  %d %d", &a, &b, &c, &d, &e);

    per =(float)100* (a + b + c + d + e) / 500;

    printf("per =%f", per);

    return 0;
}