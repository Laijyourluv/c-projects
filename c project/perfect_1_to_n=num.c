#include <stdio.h>
int main()
{
    int n, j = 1;

    printf("Enter the number 1 to n for finding perfect number \n");
    scanf("%d", &n);

    while (j <= n) // for (j = 1; j <= n; j++)
    {
        int i = 1, s = 0;
        while (i <= j / 2) // for (i = 1; i <= j / 2; i++)
        {
            if (j % i == 0)
            {
                s = s + i;
            }

            i = i + 1;
        }

        if (s == j)
        {
            printf("Perfect num=%d\n", j);
        }
        // else
        // {
        //     printf("Not Perfect=%d\n", j);
        // }
        j = j + 1;
    }
    return 0;
}
