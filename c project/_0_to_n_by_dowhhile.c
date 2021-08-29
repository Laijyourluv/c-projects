#include <stdio.h>
int main()
{
    int n, i = 0, j = 1;

    printf("Enter the number \n");
    scanf("%d", &n);

    do
    {
        printf("n=%d\n", i);
        i = i + 1;
        j = j + 1;
    }

    while (j <= n);

    return 0;
}