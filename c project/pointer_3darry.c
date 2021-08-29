#include <stdio.h>
int main()
{
    int *a[10][10][10], i, j, k;

    printf("size %d\n", sizeof(a));

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("Enter a[%d][%d][%d]\n", i, j, k);
                scanf("%d", *(*(a + i) + j) + k);
            }
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("a[%d][%d][%d]  adrees=%d\t value=%d\n", i, j, k, *(*(a + i) + j) + k, *(*(*(a + i) + j) + k));
            }
        }
    }

    return 0;
}