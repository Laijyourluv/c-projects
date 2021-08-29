#include <stdio.h>

int total(int, int, int, int, int);
float per(int l);
int main()
{
    int a, b, c, d, e, l;

    printf("Enter 5-marks\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    l = total(a, b, c, d, e); //calling
    float p;
    p = per(l);
    printf("Total=%d\n", l);
    printf("\nPer is : %f", p);
    return 0;
}

int total(int a, int b, int c, int d, int e)
{

    return a + b + c + d + e;
}
float per(int l)
{
    float p;
    p = l / 500.0 * 100.0;
    return p;
}