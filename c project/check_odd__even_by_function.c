
// without argument or return type
/*
#include <stdio.h>

void check(int);
int main()
{
    int n;

    printf("enter the value \n");
    scanf("%d", &n);

    check(n);
main}

void check(int n)
{

    if (n % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}   */

// with argument or retrun type

#include <stdio.h>

int check(int n);
int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d", &n);

    int c;
    c = check(n);

    if (c == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("odd\n");
    }

    return 0;
}

int check(int z)
{
    return z&1;      // return z%2;
}