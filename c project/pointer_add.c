#include <stdio.h>
int main()
{
    // addtion of pointer
    int s, a, b, f, *p, *q;
    p = &a;
    q = &b;
    printf("Enter the value of p and q\n");
    scanf("%d %d", p, q);
    s = *p + *q;
    printf("sum=%u \n", s);
    //  subtracvtion
    f = *p - *q;
    printf("sub=%u \n", s);
    return 0;
}