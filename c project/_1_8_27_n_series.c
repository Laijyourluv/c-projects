#include <stdio.h>
int main()
{
    int n, i = 1, t;

    printf("Enter the number \n ");
    scanf("%d", &n);

    do
    {
        t = i * i * i;

        printf("cube=%d\n", t);

        i = i + 1;
    } while (i <= n);

    return 0;
}