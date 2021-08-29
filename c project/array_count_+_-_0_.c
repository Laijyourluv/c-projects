#include <stdio.h>
int main()
{

    int a[10];
    int i,n;

    printf("\n\nEnter the aarray size\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int j = 0, k = 0, s = 0;

    for (i = 0; i < n; i++)
    {

        int x;
        x = a[i] * (-1);

        if (x > 0)
        {
            j = j + 1;
        }
        else if (x < 0)
        {
            k = k + 1;
            // printf("+ value > %d\n", k);
        }
        else
        {
            s = s + 1;
        }
    }
    printf("- value =>  %d\n", j);
    printf("+ value => %d\n", k);
    printf("null value => %d\n", s);
    return 0;
}