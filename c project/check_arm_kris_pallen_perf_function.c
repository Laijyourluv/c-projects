#include <stdio.h>

void pallen(int);
void kris(int);
void arm(int);
void perf(int);
int main()
{
    int n;

    printf("Enter the number \n");
    scanf("%d", &n);

    pallen(n);
    kris(n);
    arm(n);
    perf(n);
}
//  perfect
void perf(int n)
{
    int s = 0;

    for (int i = 1; i <= n / 2; i++)
    {

        if (n % i == 0)
        {
            s = s + i;
        }
    }

    if (s == n)
    {
        printf("perfect number=%d\n", n);
    }
    else
    {
        printf("not perfect=%d\n", n);
    }
}

// armstrong

void arm(int n)

{
    int m, c = 0;
    int s = n;
    while (n > 0)
    {
        m = n % 10;
        c = c + (m * m * m);
        n = n / 10;
    }

    if (c == s)
    {
        printf("Armstrong=%d\n", s);
    }
    else
    {
        printf("Not Armstrong=%d\n", s);
    }
}

//  krisnmurti

void kris(int n)
{
    int m, l, s = 0;

    for (l = n; n > 0; n = n / 10)
    {
        m = n % 10;

        int i, f = 1;

        for (i = 1; i <= m; i++)
        {
            f = f * i;
        }
        s = s + f;
    }

    if (s == l)
    {
        printf("Krishanmurti=%d\n", s);
    }
    else
    {
        printf("not Krishanmurti=%d\n", s);
    }
}

// pallendrome

void pallen(int n)
{
    int l, r = 0, m;
    for (l = n; n > 0; n = n / 10)
    {

        m = n % 10;

        r = m + r * 10;
    }
    if (r == l)
    {
        printf("Pallendrome=%d\n", r);
    }
    else
    {
        printf("Not Krishanmurti=%d\n", r);
    }
}