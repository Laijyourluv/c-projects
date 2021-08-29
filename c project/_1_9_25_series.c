#include <stdio.h>
int main()
{
    int n, i = 1, k = 0, j = 0;

    printf("Enter the number\n");
    scanf("%d", &n);

    do
    {

        j = i * i;
        printf("n =%d\n", j);

        i = i + 2;

        k = k + 1;
    } while (k <= n - 1);

    return 0;
}