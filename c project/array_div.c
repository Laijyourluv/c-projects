#include <stdio.h>
int main()
{
    int i, j, r, c, a[10][10], b[10][10], div[10][10];

    printf("Enter the rowb \n");
    scanf("%dx", &r);
    printf("Enter the column\n");
    scanf("%d", &c);

    printf("Enter the elements of 1  matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elemnts of 2 matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("All elements of div matrix\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            div[i][j] = a[i][j] / b[i][j];
            printf("%d\t", div[i][j]);
        }
        printf("\n");

    }

    return 0;
}