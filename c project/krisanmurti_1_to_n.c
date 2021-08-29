#include <stdio.h>
int main()
{
    int n, l, j = 1;
    int m;

    printf("Enter the number\n");
    scanf("%d", &n);

    // while (j <= n)
    for (j = 1; j <= n; j++)

    {
        l = j;
        int s = 0;
        // while (l != 0)
        for( l = j; l>0;    l = l / 10 )
        {
            m = l % 10;

            // l = l / 10;

            int i, f = 1;
            for (i = 1; i <= m; i++)
            {
                f = f * i;
            }

            s = s + f;
        }
        if (s == j)
        {
            printf("krishanmurti=%d\n", s);
        }
        // j++;
    }
    return 0;
}