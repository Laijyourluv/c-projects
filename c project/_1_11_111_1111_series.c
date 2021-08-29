#include <stdio.h>
int main()
{
    int n, j = 0, i = 1;

    printf("Enter the number \n");
    scanf("%d", &n);

    do
    {

        j = j * 10 + 1;

        printf("J=%d\n", j);

        i = i + 1;
    } while (i <= n);

    return 0;
}