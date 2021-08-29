#include <stdio.h>
int main()
{
    int n, i = 1, s = 0, c;
    printf("Enter the number\n");
    scanf("%d", &n);

    while (i <= n)
    {
        if (i % 2 == 0)
        {
            // printf("Even=%d\n", i);
            s = s + 1;
        }
        else
        {

            // printf("odd=%d\n", i);
            c = c + 1;
        }
        i = i + 1;
    }

    printf("Even number=%d\n", s);
    printf("Odd Number=%d\n", c);

    return 0;
}