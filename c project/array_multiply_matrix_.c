#include <stdio.h>
int main()
{
    int i, j, r, c, a[10][10], b[10][10], m[10][10];
    printf("enter the row elements\n");
    scanf("%d", &r);

    printf("enter the column elements\n");
    scanf("%d", &c);

    printf("enter the 1 matrix elements\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter 2 matrix elements\n");
    for (i = 0; i < r; i++)
    {

        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("multiply\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            m[i][j] = a[i][j] * b[i][j];
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}