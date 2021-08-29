#include <stdio.h>

void prime(int);
void main()
{
    int n;

    printf("enter the number\n");
    scanf("%d", &n);
    prime(n);
}

void prime(int n)
{
    int i, t = 0;
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
}