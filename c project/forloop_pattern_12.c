#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}