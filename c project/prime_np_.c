#include <stdio.h>

int main()
{
    int n, i = 2, j, t = 0;

    printf("Enter the number \n");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        printf("not prime\n");
    }

    else
    {
        if (i < n)
        {
            if (n % i == 0)
            {
                t = 1;
            }
            i = i + 1;
        }

        if (t > 0)
        {
            printf("not prime\n");
        }

        else
        {
            printf("prime\n");
        }
    }
    // prime 2 nd method
    /*
    for (i = 2; i <= n; i++)
    {
        int c = 0;
        for (j = 2; j < i; j++)
        {

            if (i % j == 0)
            {
                c = c + 1;
            }
        }

        if (c == 0)
        {
            printf("prime=%d\n", i);
        }
    } */
    return 0;
}