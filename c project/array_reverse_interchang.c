
#include <stdio.h>
int main()
{
    int a[10];

    int i, j;

    printf("Enter the  number\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    int s = a[4];

    for (i = 4; i >= 0; i--)
    {

        if (i != 0)
        {
            a[i] = a[i - 1];
        }
        else
        {
            a[0] = s;
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("\t%d\n", a[i]);
    }

    return 0;
}