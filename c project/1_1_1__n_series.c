#include <stdio.h>
int main()
{
    int n, i = 1, j;

    printf("Enter the number \n");
    scanf("%d", &n);

    do
    {
        j = 1;
        printf("J=%d\n", j);

        i = i + 1;
    } while (i <= n);

    return 0;
}