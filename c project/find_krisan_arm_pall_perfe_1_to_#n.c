#include <stdio.h>
int main()
{
    int n, a, b = 1;
    int c;

    printf("Enter the number\n");
    scanf("%d", &n);

    for (b = 1; b <= n; b++)
    {
        a = b;
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
        if (d == b)
        {
            printf("krishanmurti    ==%d\n", d);
        }
    }

    // armstrong

    int e;
    int m, f = 1, g = 0;

    while (f <= n)
    {
        e = f;
        int g = 0;
        while (e != 0)
        {
            m = e % 10;
            g = g + (m * m * m);
            e = e / 10;
        }

        if (g == f)
        {
            printf("Armstrong==%d\n", g);
        }

        f++;
    }

    // pallendrome

    int h;
    int j, i = 1;

    while (i <= n)
    {
        h = i;
        int k = 0;
        while (h != 0)

        {

            j = h % 10;
            k = j + k * 10;
            h = h / 10;
        }

        if (k == i)
        {

            printf("Pallendrome  ===%d\n", k);
        }

        i++;
    }

    // perfect number

    int l = 1;

    while (l <= n) // for (l = 1; l <= n; l++)
    {
        int m = 1, n = 0;
        while (m <= l / 2) // for (m = 1; m <= l / 2; m++)
        {
            if (l % m == 0)
            {
                n = n + m;
            }

            m = m + 1;
        }

        if (n == l)
        {
            printf("Perfect       =====%d\n", l);
        }

        l = l + 1;
    }

    return 0;
}