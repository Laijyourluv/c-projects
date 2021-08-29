#include <stdio.h>
void per(int);
void total(int, int, int, int, int);
void main()
{
    int a, b, c, d, e;

    printf("Enter marks of 5-subjects \n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    total(a, b, c, d, e);
    // calling
    total(10, 10, 10, 10, 10);

    // printf("\n\n\n");
    // per(a, b, c, d, e);
    // per(10, 5, 5, 5, 5);
}

void total(int a, int b, int c, int d, int e)
{
    int t = 0;
    t = a + b + c + d + e;
    printf("total=%d\n", t);
    per(t);
}

void per(int t)
{
    int p;
    p = t * 100 / 500;
    printf("percentage=%d\n", p);
}
