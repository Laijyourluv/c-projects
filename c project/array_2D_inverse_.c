#include <stdio.h>
int main()
{
    int a[10][10];
    int i, j, r, c, k = 1, l = 1;

    printf("Enter the array elements\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // 2-- dterminant
    printf("Determnant \n");

    for (i = 0; i < 2; i++)
    {
        for (j = i; j < 2; j++)
        {

            k = k * a[i][j];
            break;
        }
    }

    printf("K=%d\n", k);

    //  d   =  a11.a12 - a12.a21

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (i != j)
            {
                l = l * a[i][j];
            }
        }
    }
    printf("l=%d\n", l);

    float m;

    m = k - l;

    printf("Determinant of 2x2=%2.f\n", m);
    // INVERSE
    printf("Inverse  of Given 2-D matrix\n");
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
            float s;
            s = (float)a[i][j] / m;
            // printf("%d\t", s);
            printf("%.2f\t", s);
        }
        printf("\n");
    }

    return 0;
}
