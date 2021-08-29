#include <stdio.h>
int main()
{
    int n, r, i = 0, c = 0;

    printf("Enter the number\n");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("\nNot even or not odd\n");
    }
    else
    {
        while (n != 0)
        {
            r = n % 10;
            n = n / 10;

            if (r % 2 == 0)
            {
                printf("even\t");
                i = i + 1;
            }

            else
            {
                printf("odd\t");
                c = c + 1;
            }
        }

        printf("\n even number=%d\n", i);
        printf("odd number=%d\n", c);
    }
    return 0;
}