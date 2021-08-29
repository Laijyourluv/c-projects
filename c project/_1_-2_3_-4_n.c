#include <stdio.h>
int main()
{
    int n, i = 1, j;

    printf("Enter the number \n");
    scanf("%d", &n);

    do
    {

        if (i % 2 == 0)
        {
            j = i * -1;
            printf("J=%d\n", j);
        }

        else
        {
            printf("J=%d\n", i);
        }
        i = i + 1;
    } while (i <= n);
    return 0;
}