#include <stdio.h>
int main()
{
    int n, i = 1, j = 1;

    printf("Enter the number \n");
    scanf("%d", &n);

    do
    {
        printf("I=%d\n", i);

        i = i + 2;
        j = j + 1;
    } while (j <= n);

    return 0;
}