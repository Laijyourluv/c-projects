#include <stdio.h>

int main()
{

    int n, k;
    printf("Enter the number \n");
    scanf("%d", &k);

    for (int l = 1; l <= k; l++)
    {
        n = 2 * k;
        for (int i = 1; i <= n;)
        {
            for (int s = n - i; s >= 1; s--)
            {
                printf(" ");
            }

            for (int j = i; j >= 1; j--)
            {
                printf("*");
            }
            i = i + 2;
            printf("\n");
        }
        break;
    }
    return 0;
}
