#include <stdio.h>
int main()
{
    int r, c, i, j,

        a[10][10],
        b[10][10], d[10][10];

    printf("Enter the array row size\n");
    scanf("%d", &r);

    printf("enter the column size\n");
    scanf("%d", &c);

    printf("Enter the 1 matrix elements\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of 2 matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("subtraction\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            d[i][j] = a[i][j] - b[i][j];
            printf("%d\t", d[i][j]);
        }
        printf("\n");
    }

    return 0;
}