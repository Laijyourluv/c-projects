#include <stdio.h>
int main()
{
    int i, j, r, c, a[10][10], b[10][10];
    // int sum = 0, s = 0;
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

    printf("Transpose matrix\n");
    for (j = 0; j < r; j++)
    {
        for (i = 0; i < c; i++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}