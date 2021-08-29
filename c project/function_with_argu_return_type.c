
#include <stdio.h>

int sum(int, int); //declaration

int main()
{
    int a, b, c;

    printf("enter two number\n");
    scanf("%d %d", &a, &b);

    c = sum(a, b); // calling
    printf("sum=%d\n", c);
    return 0;
}

int sum(int p, int q) // defination

{

    return p + q;
}