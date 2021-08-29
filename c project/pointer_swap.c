#include <stdio.h>
//*x=0  or *y=4
void fun(int *x, int *y)
{          // x points a and y points to b
    x = y; // y points b; and x points to b

    *x = 2; // value of *x is 2 then b change to 2
}
int main()
{
    int a = 0, b = 4;
    fun(&a, &b);
    printf("a=%d\n b=%d\n", a, b);
    return 0;
}