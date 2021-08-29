#include <stdio.h>
int main()
{
    int n, l = 0, s;
    int r = 0;

    printf("Enter the number to find pallendrome\n");
    scanf("%d", &n);

    s = n;                   //remember

    while (n != 0)
    {
        r = n % 10;

        l = r + l * 10;
        n = n / 10;
    }
    printf("l=%d\n", l);

    if (l == s)
    {

        printf("Pallendrome\n");
    }

    else
    {
        printf("Not Pallendrome\n");
    }

    return 0;
}
