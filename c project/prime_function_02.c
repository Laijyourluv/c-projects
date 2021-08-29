#include <stdio.h>

int prime(int);
int main()
{
    int n;

    printf("enter the number\n");
    scanf("%d", &n);

    int t;

    t = prime(n);

    if (t == 0)
    {
        printf(" prime\n");
    }

    else
    {
        printf("not prime\n");
    }

    return 0;
}

int prime(int n)
{
    int i = 2, t = 0;
    if (n == 0 || n == 1)
    {
        t = 1;
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
    }

    return t;
}