#include <stdio.h>
int main()
{
    float n, j = 0, i = 1;

    printf("Enter the NUmber\n");
    scanf("%f", &n);

    while (i <= n)
    {

        j = j + (i * i) / (i + 1);

        printf("j=%.2f\n", j);

        i = i + 1;
    }

    return 0;
}