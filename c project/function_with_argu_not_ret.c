#include <stdio.h>

void sum(int, int); //declaration
void main()
{

    int a, b;

    printf("Enter two number\n");
    scanf("%d %d", &a, &b);
    sum(a, b); // calling as many times
    sum(5, 2); // call too many times
}
void sum(int p, int q) // actual parameters int a,int b
{                      // we can give different varaible
                       // by replacing a or b

    int c;
    c = p + q;

    printf("c=%d\n", c);
}