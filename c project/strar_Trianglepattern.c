#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    int i, j, k, l = 0;

    for (i = 1; i <= n; i++)
    {
        // l = l + 1;
        for (j = n - i; j >= 1; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)

        {
            printf("* ");
        }

        for (j = n - i; j >= 1; j--)
        {
            printf(" ");
        }

        printf("\n");
    }

    return 0;
}