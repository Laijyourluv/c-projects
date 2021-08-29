#include <stdio.h>
int main()
{
    int n, i = 1, j = 1, k = 0;

    printf("Enter the number \n");
    scanf("%d", &n);

    do
    {
        j = i % 2;

        printf("j=%d\n", j);
        i = i + 1;
        k = k + 1;
    } while (k < n);

    return 0;
}