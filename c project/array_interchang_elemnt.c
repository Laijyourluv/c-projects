#include <stdio.h>
int main()
{
    int a[10], i, n;

    printf("Enter the array length\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int t = a[0];
    for (i = 0; i < n; i++)
    {

        if (i != n - 1)
        {
            a[i] = a[i + 1];
        }
        else if (i == n - 1)
        {
            a[i] = t;
        }
        printf("interchanging \t\t%d\n", a[i]);
    }

    return 0;
}