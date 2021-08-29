#include <stdio.h>
int main()
{
    int n, f = 1, i = 1;

    printf("Enter the number\n");
    scanf("%d", &n);
    while (i <= n)
    {

        f = f * i;
        printf("factorial=%d\n", f);
        i = i + 1;
    }

    return 0;
}