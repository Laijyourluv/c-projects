#include <stdio.h>
#include <stdlib.h>
void inter(int n, int *p, int i)
{
    p = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i); // p+i indicate address
    }
    int t = p[0];
    for (i = 0; i < n; i++)
    {

        if (i != n - 1)
        {
            *(p + i) = *(p + i + 1); // *(p+i) indicate value
        }
        else if (i == n - 1)
        {
            *(p + i) = t;
        }
        printf("interchanging \t\t%d\n", *(p + i));
    }
}
int main()
{
    int a[10], i, n;

    printf("Enter the array length\n");
    scanf("%d", &n);

    inter(n, a, i);
    return 0;
}