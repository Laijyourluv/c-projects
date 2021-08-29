#include <stdio.h>
int main()
{
    int a[10];
    int i;
    printf("Enter the elements\n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
        {
            int t;
            t = a[i];
            a[i] = a[i + 1];
            a[i + 1] = t
            ;
        }

        printf("\t%d\n", a[i]);
    }

    return 0;
}