#include <stdio.h>
int main()
{
    int a[10][10];
    int i = 0, j = 0, k;

    printf("Enter the matrix \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Adjoint of Given 2-D matrix\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (i == j)
            {
                k = a[i][j];

                a[0][0] = a[1][1];

                a[1][1] = k;
            }
            else
            {
                a[i][j] = a[i][j] * -1;
            }

            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
