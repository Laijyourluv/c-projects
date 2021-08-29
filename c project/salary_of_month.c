#include <stdio.h>
int main()
{

    int h, r;

    int a = 0;

    printf("enter the hour and rate of work\n");
    scanf("%d %d", &h, &r);

    a = r * h;
    printf("amount =%d", a);
    return 0;
}