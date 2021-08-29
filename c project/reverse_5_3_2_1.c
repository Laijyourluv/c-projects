#include <stdio.h>
int main()
{
    int n, i, j = 1;

    printf("enter the Value\n");
    scanf("%d", &n);
    i = n;

    while (  j <= n)
    {

        printf("i=%d\n", i);

        i = i - 2;
        j = j + 1;
    }

    return 0;
}