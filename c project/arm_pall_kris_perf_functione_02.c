//  with argument or return type

#include <stdio.h>

int perf(int n);
int pallen(int n);
int arm(int n);
int kris(int n);
int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d", &n);

    int d;
    for (int b = 1; b <= n; b++)
    {

        d = kris(b); // call by value

        if (d == b)
        {
            printf("krishanmurti    ==%d\n", d);
        }
    }

    int g;
    for (int f = 1; f <= n; f++)

    {

        g = arm(f); //call by value
        if (g == f)
        {
            printf("Armstrong==%d\n", g);
        }
    }

    int i, k;
    while (i <= n)
    {
        k = pallen(i); //calll by value
        if (k == i)
        {

            printf("Pallendrome  ===%d\n", k);
        }

        i++;
    }

    int np;
    for (int l = 1; l <= n; l++)
    {
        np = perf(l); //calll of vallue
        if (np == l)
        {
            printf("Perfect       =====%d\n", l);
        }
    }
}
// krishanmurti

int kris(int xz)
{
    int c, a;

    a = xz;
    int d = 0;
    while (a != 0)
    {
        c = a % 10;

        a = a / 10;

        int i, f = 1;
        for (i = 1; i <= c; i++)
        {
            f = f * i;
        }

        d = d + f;
    }

    return d;
}

// armstrong

int arm(int xy) // defination

{
    int e;
    int m;

    e = xy;
    int g = 0;
    while (e != 0)
    {
        m = e % 10;
        g = g + (m * m * m);
        e = e / 10;
    }

    return g;
}

//  pallendrome

int pallen(int yz) // defination
{
    int h;
    int j;

    h = yz;
    int k = 0;
    while (h != 0)

    {

        j = h % 10;
        k = j + k * 10;
        h = h / 10;
    }

    return k;
}

// perfect number

int perf(int l) // defination
{

    int m = 1, np = 0;
    while (m <= l / 2) // for (m = 1; m <= l / 2; m++)
    {
        if (l % m == 0)
        {
            np = np + m;
        }

        m = m + 1;
    }
    return np;
}
