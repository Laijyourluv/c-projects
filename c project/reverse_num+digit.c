#include <stdio.h>
int main()
{
    int n, r, l = 0;

    printf("Enter the number\n");
    scanf("%d", &n);

    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        l = r + l * 10;
    }
    printf("reverse=%d\n", l);

    return 0;
}