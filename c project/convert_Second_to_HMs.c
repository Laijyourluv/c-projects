#include <stdio.h>
int main()
{

    int T;
    int h, m, s = 0;

    printf("enter the value of Total second\n");
    scanf("%d", &T);

    h = T / 3600;
    m = T % 3600 / 60;

    s = T % 3600 % 60;

    printf("hour=%d\n", h);
    printf("minute=%d\n", m);
    printf("second=%d\n", s);
    return 0;
}