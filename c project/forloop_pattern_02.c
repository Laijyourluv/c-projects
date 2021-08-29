#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                int k = 0;
                printf("%d", k);
            }
            else
            {
                printf("%d", a);
            }
        }
        printf("\n");
    }

    return 0;
}