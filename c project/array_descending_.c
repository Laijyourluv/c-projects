#include <stdio.h>
int main()
{
    int a[10];
    int i, j;
    printf("Enter the array numbers\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                int t;
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for (i = 4; i >= 0; i--)
    {

        printf("descending order =%d\n", a[i]);
    }
    return 0;
}