#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number \n");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int s = n - i; s >= 1; s--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}