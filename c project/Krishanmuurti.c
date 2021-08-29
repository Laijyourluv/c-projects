#include <stdio.h>
int main()
{
    int n, l;
    int m, s = 0;

    printf("Enter the number\n");
    scanf("%d", &n);

    for (l = n; n > 0; n = n / 10)
    {
        m = n % 10;
        // n = n / 10;

        int i, f = 1;
        for (i = 1; i <= m; i++)
        {
            f = f * i;
        }

        s = s + f;
    }
    if (s == l)
    {
        printf("krishanmurti=%d\n", s);
    }
    else
    {
        printf("not krishanmurti=%d\n", s);
    }
    return 0;
}