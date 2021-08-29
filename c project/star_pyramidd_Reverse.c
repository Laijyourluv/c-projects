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

        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }

        for (int j = 1; j < i; j++)
        {
            printf("*");
        }
        // for (int s = 1; s <= i; s++)
        // {
        //     printf("*");
        // }

        printf("\n");
    }
    return 0;
}