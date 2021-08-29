//  with arrgument or retrn type
#include <stdio.h>

int sum(int, int);
int sub(int, int); // declaration
int mul(int, int); //
int div(int, int);
int mod(int, int);
int main()
{
    int a, b, c, s;

    printf("enter two number\n");
    scanf("%d %d", &a, &b);

    printf("enter your choice \n 1. +\n 2.- \n 3.*\n 4. / \n 5. %%\n");

    scanf("%dn", &s);

    switch (s)

    {
    case 1:
        c = sum(a, b); //caaling

        printf("C=%d\n\n", c);
        break;

    case 2:
        c = sub(a, b);
        printf("c=%d\n", c); //calling
        break;

    case 3:
        c = mul(a, b);
        printf("c=%d\n", c);
        break;

    case 4:
        c = div(a, b);
        printf("c=%d\n", c);
        break;

    case 5:
        c = (a, b); //caallling
        printf("c=%d\n", c);
        break;

    default:
        printf("invalid choice");
        break;
    }

    return 0;
}



int sum(int a, int b) /*        defination  */
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
int mod(int a, int b)
{
    return a % b;
}