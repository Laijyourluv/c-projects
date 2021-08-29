#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int s = n - i; s >= 1; s--)
        {
            printf(" ");
        }

        for (int j = i; j >= 1; j--)
        {
            int k = i;
            printf("%d", k);
            k++;
        }
        printf("\n");
    }

    return 0;
}