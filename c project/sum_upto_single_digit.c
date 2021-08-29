#include <stdio.h>
int main()
{
    int n, s = 0;

    printf("Enter the number\n");
    scanf("%d", &n);

    while (n != 0)
    {
        s = s + n % 10;
        n = n / 10;

        if (s > 9)
        {
            n = s;
            s = 0;

            while (n != 0)
            {
                s = s + n % 10;
                n = n / 10;
            }
        }

        else
        {
            printf("sum=%d\n", s);
        }
    }
    return 0;
}