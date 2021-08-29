#include <stdio.h>
int main()
{
    int n, i = 1, p = 0;

    printf("Enter the number \n");
    scanf("%d", &n);

    do
    {

        p = p + i;
        printf("P=%d\n", p);
        i = i + 1;
    } while (i <= n);

    return 0;
}