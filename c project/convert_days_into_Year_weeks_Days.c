#include <stdio.h>
int main()
{
    int D;
    int y = 0, w = 0, d = 0;

    printf("enter the  TOTAL Days\n");
    scanf("%d", &D);

    y = D / 365;
    w = D % 365 / 7;
    d = D % 365 % 7;
    printf("year=%d\n", y);
    printf("week=%d\n", w);
    printf("days=%d\n", d);
    return 0;
}