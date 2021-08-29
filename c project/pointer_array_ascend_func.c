#include <stdio.h>

void array(int n, int *p)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
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

        printf("ascendinnd =%d\n", *(p + i));
    }
}
void main()
{
    int n;
    int a[10];
    printf("Enter the array length\n");
    scanf("%d", &n);

    array(n, a);
}