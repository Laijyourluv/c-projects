#include <stdio.h>
int main()
{
    int n, i, j;

    printf("Enter the number\n");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)

    {
        int c = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {

                c++;
            }
        }

        if (c == 0)
        {
            printf("  prime=%d\n", i);
        }
    }
    return 0;
}