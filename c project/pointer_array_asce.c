#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, i, j;
    int *p;
    int x;
    float y;
    char z;

    printf("Size of int =%d\t float =%d\t char =%d\n", sizeof(x), sizeof(y), sizeof(z));
    printf("Enter the size\n");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter value of %d\n", i);
        scanf("%d", (p + i));
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(p + i) > *(p + j))
            {
                int t;
                t = *(p + i);
                *(p + i) = *(p + j);

                *(p + j) = t;
            }
        }
        printf("ascending order=%d\n", *(p + i));
    }
}