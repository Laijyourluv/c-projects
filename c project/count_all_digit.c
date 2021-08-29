#include <stdio.h>
int main()

{
    int n, s = 0, c = 0;

    printf("Enter the number\n");
    scanf("%d", &n);

// exception 0

    while (n != 0)

    {
        s = s + n % 10;
        n = n / 10;

        c = c + 1;
    }
    printf("Number of digit=%d\n", c);

    return 0;
}