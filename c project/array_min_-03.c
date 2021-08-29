#include <stdio.h>
int main()
{
    int a[10];
    int i;
    printf("Enter the  number\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = a[0];

    for (i = 0; i < 5; i++)
    {

        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("Min num=%d\n", min);

    return 0;
}