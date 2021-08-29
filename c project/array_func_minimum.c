#include <stdio.h>
int min(int a[])
{
    int i, min = a[0];

    for (i = 0; i < 5; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
int main()
{
    int a[10];
    int i;
    printf("Enter the array elements\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a);
    }

    int p;
    p = min(a);
    printf("Minimum value =%d\n", p);
}
