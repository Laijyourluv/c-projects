#include <stdio.h>
int main()
{
    int n, k = 1;

    printf("Enter the number\n");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) 
    {

        for (int j = i; j >= 1; j--)
        {

            printf("%d", k);
            k++;
        }
        printf("\n");
    }

    return 0;
}