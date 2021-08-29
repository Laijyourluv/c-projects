#include <stdio.h>
#include <string.h>
void luv_cmp()
{

    char X[100];
    gets(X);
    printf("\n");

    char Y[100];

    gets(Y);

    printf("\n");
    int i, j, l = 0, s = 0;

    for (i = 0; X[i] != NULL; i++)
    {
        s = s + 1;
    }

    for (j = 0; Y[j] != NULL; j++)
    {

        l = l + 1;
    }

    for (i = 0, j = 0; X[i] != NULL || Y[j] != NULL; i++, j++)
    {

        if (X[i] == Y[j])
        {

            while (i == s - 1 && j == l - 1)
            {

                printf("X==Y\t");
                printf("0");
                printf("\n");
                break;
            }
        }

        if (X[i] != Y[j])
        {
            if (X[i] > Y[j])
            {
                printf("X>>Y\t");
                printf("1\n");
                break;
            }

            else
            {
                printf("X<<Y\t");
                printf("-1\n");
                break;
            }
        }
    }
    luv_cmp();
}
void main()
{
    luv_cmp();
}