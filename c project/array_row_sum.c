#include <stdio.h>
int main()
{
    int i, j, r, c, a[10][10], b[10][10];
    int sum = 0;
    printf("enter the row \n");
    scanf("%d", &r);

    printf("Ente the column \n");
    scanf("%d", &c);

    printf("Enter the elements of Matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("ROW \n");
    int max = 0, min;

    for (i = 0; i < r; i++)
    {

        for (j = 0; j < c; j++)
        {
            sum = sum + a[i][j];
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
            min = a[i][0];
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }

        printf("\t");
        printf("min=%d\n", min);
        printf("\tMax=%d\n", max);
        printf("\tsum of row[%d] =%d\n", i, sum);
        sum = 0;
        printf("\n");
    }

    printf("COLUMN\n");
    for (j = 0; j < c; j++)
    {

        for (i = 0; i < r; i++)
        {
            sum = sum + a[i][j];
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
            min = a[i][0];
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
        printf("\t");
        printf("min=%d\n", min);
        printf("\tMax=%d\n", max);
        printf("\tsum of column[%d] =%d\n", j, sum);
        sum = 0;
        printf("\n");
    }

    return 0;
}