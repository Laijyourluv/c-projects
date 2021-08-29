#include <stdio.h>
int main()
{
    int i, j, r, c, a[10][10], b[10][10];
    int sum = 0, s = 0;
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

    if (r == c)
    {
        printf("Matrix\n");
        for (i = 0; i < r; i++)
        {
            for (j = i; j < c; j++)
            {
                sum = sum + a[i][j];

                break;
            }
        }
        printf("Right Diagonal sum=%d\n", sum);

        for (i = 0; i < r; i++)
        {

            for (j = 0; j < r; j++)

            {
                if (i + j == r - 1)
                    s = s + a[i][j];
            }
        }
        printf("Left Diagonal sum=%d\n", s);
    }
    return 0;
}
