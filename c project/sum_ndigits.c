#include <stdio.h>
int main()
{
    int n, s = 0;

    printf("Enter the number\n");
    scanf("%d", &n);

    while (n != 0)
    {
        s = s + n % 10;
        n = n / 10;
    }
    printf("Sum=%d\n", s);

    return 0;
}