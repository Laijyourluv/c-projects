#include <stdio.h>
int main()
{
    int n, b;

    printf("enter the number \n");
    scanf("%d", &n);

    if (n >= 0 && n <= 9)
    {
        b = 1;
        printf("number of digit =%d", b);
    }

    else if (n >= 10 && n <= 99)
    {

        b = 2;
        printf("number of digit =%d", b);
    }

    else if (n >= 100 && n <= 999)
    {
        b = 3;
        printf("number of digit =%d", b);
    }

    else if (n >= 1000 && n <= 9999)
    {
        b = 4;
        printf("number of digit =%d", b);
    }

    else if (n >= 10000 && n <= 99999)
    {
        b = 5;
        printf("number of digit =%d", b);
    }
    return 0;
}