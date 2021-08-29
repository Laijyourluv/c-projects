#include <stdio.h>
int main()
{
    int n, s;
    int m, i = 1, c = 0;

    printf("Enter the number \n");
    scanf("%d", &n);

    while (i <= n)
    {
        s = i;
        int c = 0;
        while (s != 0)
        {
            m = s % 10;
            c = c + (m * m * m);
            s = s / 10;
        }

        if (c == i)
        {
            printf("Armstrong=%d\n", c);
        }
        // else
        // {
        //     printf("Not Armstrong=%d\n", c);
        // }
        i++;
    }

    
    return 0;
}