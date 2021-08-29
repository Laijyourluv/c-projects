#include <stdio.h>
int main()
{
    int a[10][10];
    int i, n, t, j;

    printf("how many table you want to print\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter number for table \n");
        scanf("%d", &t);

        for (j = 0; j < 10; j++)
        {
            *(*(a + i) + j) = t * (j + 1);
            printf("%dx%d=%d\n", t, j + 1, *(*(a + i) + j));
        }
        printf("\t");
    }

    return 0;
}