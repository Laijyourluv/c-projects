#include <stdio.h>
int main()
{
    int a[10];
    int i;
    int l = 0, s = 0;
    printf("Enter the  number\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            s = s + 1;
            // printf("even=%d\t\n", a[i]);
        }
        else
        {
            l = l + 1;
            // printf("Odd=%d\t", a[i]);
        }
    }
    printf("even=%d\t\n", s);
    printf("odd=%d\t\n", l);
    return 0;
}