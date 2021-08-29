#include <stdio.h>
int main()
{
    int n, i, j, k, l, m;

    printf("enter the value\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        for (k = n; k >= 1; k--)
        {
            printf("  *");
        }

        printf("\n");
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
    }

    return 0;
}