#include <stdio.h>
int main()
{
    int n,N, i = 1;
    printf("Enter the number\n");
    scanf("%d", &n);

    while (i <= 10)
    {
        N = n * i;
        printf("N=%d\n", N);
        i=i+1;
    }

    return 0;
}