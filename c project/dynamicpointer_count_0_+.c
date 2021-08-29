#include <stdio.h>
#include <stdlib.h>
void count(int n, int *p)
{
    int i, j = 0, k = 0, s = 0, l;

    p = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter the a[%d] \n", i);
        scanf("%d", p + i);
    }

    for (i = 0; i < n; i++)
    {

        l = *(p + i) * (-1);
        if (l > 0)
        {
            j = j + 1;
        }
        else if (l < 0)
        {
            k = k + 1;
        }
        else
        {
            s = s + 1;
        }
    }
    printf("(--) =>j=%d \t (++) => k= %d\t (Null)=> s=%d\n", j, k, s);
}
int main()
{
    int a[10], n;

    printf("Enter the array length\n");
    scanf("%d", &n);
    count(n, a);
    return 0;
}