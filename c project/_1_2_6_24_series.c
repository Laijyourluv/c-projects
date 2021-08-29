#include <stdio.h>
int main()
{
    int n, i = 1, q = 1;

    printf("Enter the number \n");
    scanf("%d", &n);

    do
    {

        q = q * i;

        printf("q=%d\n", q);

        i = i + 1;
    } while (i <= n);

    return 0;
}