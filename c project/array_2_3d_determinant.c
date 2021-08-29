#include <stdio.h>
int main()
{
    int a[10][10], b[10][10];
    int i, j, r, c, k = 1, l = 1;

    printf("Enter the number of row\n");
    scanf("%d", &r);

    printf("Enter the number of column\n");
    scanf("%d", &c);

    if (r == c)
    {
        if (r && c == 2)

        {
            printf("Enter the array elemnts\n");
            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    scanf("%d", &a[i][j]);
                }
            }

            for (i = 0; i < r; i++)
            {
                for (j = i; j < c; j++)
                {

                    k = k * a[i][j];
                    break;
                }
            }

            printf("K=%d\n", k);

            //  d   =  a11.a12 - a12.a21

            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {
                    if (i != j)
                    {
                        l = l * a[i][j];
                    }
                }
            }
            printf("l=%d\n", l);

            int m;

            m = k - l;

            printf("Determinant of 2x2=%d\n", m);
        }
        else if (r && c == 3)
        {
            printf("Enter the array elements\n");

            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {

                    scanf("%d", &a[i][j]);
                }
                printf("\n");
            }

            int r;

            for (i = 0; i < r; i++)
            {
                for (j = 0; j < c; j++)
                {

                    r = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]) - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]) + a[0][2] * (a[2][1] * a[1][0] - a[1][1] * a[2][0]);
                }
            }
            printf("%d\n", r);
        }
        else
        {

            printf("Invalid choice\n");
        }
    }
    return 0;
}
