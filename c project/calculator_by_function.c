// with argument or without return type
#include <stdio.h>

void sum(int, int);
void sub(int, int);
void mul(int, int);
void div(int, int);
void mod(int, int);
void main()
{
    int a, b, s;

    printf("enter two number\n");
    scanf("%d %d", &a, &b);
    printf("\nChoose Option... 1. ADD\n2. SUB\n3. MUL \n4. DIV \n5.modu\n");
    scanf("%d", &s);

    switch (s)

    {
    case 1:
        sum(a, b);
        break;

    case 2:
        sub(a, b);
        break;

    case 3:
        mul(a, b);
        break;

    case 4:
        div(a, b);
        break;

    case 5:
        mod(a, b);
        break;

    default:
        printf("invalid choice");
        break;
    }
}
void sum(int a, int b)
{
    int c;
    c = a + b;
    printf("\nSum is : %d", c);
}
void sub(int a, int b)
{
    int c;
    c = a - b;
    printf("Sub=%d", c);
}
void mul(int a, int b)
{
    int c;
    c = a * b;
    printf("c=%d\n", c);
}
void div(int a, int b)
{
    int c;
    c = a / b;
    printf("c=%d\n", c);
}
void mod(int a, int b)
{
    int c;
    c = a % b;
    printf("c=%d\n", c);
}