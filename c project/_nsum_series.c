#include <stdio.h>

//  (1+1/1*1 +1/2*2 + + ++ +   i/n2)
int main()
{
    float n, i = 1, j = 0;

    printf("Enter the number\n");
    scanf("%f", &n);

    do
    {
        j = j + (1 / (i * i));

        printf("j=%.2f\n", j);

        i = i + 1;
    } while (i <= n);

    return 0;
}
