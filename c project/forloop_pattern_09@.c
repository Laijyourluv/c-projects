#include <stdio.h>
int main()
{
    int n, k;
    printf("Enter the number\n");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        k = i;
        for (int j = i; j >= 1; j--)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}