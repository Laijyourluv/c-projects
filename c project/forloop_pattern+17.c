#include <stdio.h>
int main()
{
    int n;

    printf("enter the  number\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int s = n - i; s >= 1; s--)
        {
            printf(" ");
        }

        for (int j = i; j >=1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}