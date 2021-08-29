#include <stdio.h>

int max(int a[]);

int main()

{
    int a[10];
    int i;
    printf("Enter the array elements\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    int p;
    p = max(a);

    printf("Max value=%d\n", p);
}

int max(int a[])
{
    int i, m = 0;

    for (i = 0; i < 5; i++)
    {
        if (a[i] > m)
        {
            m = a[i];
        }
    }

    return m;
}