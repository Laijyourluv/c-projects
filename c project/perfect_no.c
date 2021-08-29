#include <stdio.h>
int main()
{
    int n, i = 1, s = 0;

    printf("Enter the number\n");
    scanf("%d", &n);

    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            s = s + i;
        }
        i = i + 1;
    }
    if (s == n)
    {
        printf("perfect number\n");
    }
    else
    {
        printf("not perfect number\n");
    }

    return 0;
}