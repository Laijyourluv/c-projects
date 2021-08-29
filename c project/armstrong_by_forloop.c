#include <stdio.h>
int main()
{
    int n, s;
    int m, i = 1, c = 0;

    printf("Enter the number \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        int c = 0;

        for (s = i; s > 0; s = s / 10)
        {
            m = s % 10;
            c = c + (m * m * m);
        }

        if (c == i)
        {
            printf("Armstrong=%d\n", c);
        }
        // else
        // {
        //     printf("Not Armstrong=%d\n", c);
        // }
        // i++;
    }

    return 0;
}