#include <stdio.h>
int main()
{
    int n, i = 0, j = 0;

    printf("enter the Value\n");
    scanf("%d", &n);

    while (j <= n - 1)
    {

        printf("i=%d\n", i);
        i = i + 1;
        j = j + 1;
    }

    return 0;
}