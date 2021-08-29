#include <stdio.h>
int main()
{
    int a[10];
    int i;

    printf("Enter the numbers\n ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = 0;
    for (i = 0; i < 5; i++)
    {

        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("Max num=%d\n", max);
    return 0;
}