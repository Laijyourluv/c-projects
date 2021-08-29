#include <stdio.h>
void divmul(int x, int y, int *mu, float *di, int *mod)
{
    *mu = x * y;  //*mu =&mul;
    *di = x / y;  // *di=&div
    *mod = x % y; //*mod=&modu;
}
int main()
{
    int a, b;
    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);
    int mul, modu;
    float div;

    divmul(a, b, &mul, &div, &modu);
    printf("Multipky =%d\n", mul);
    printf("division =%f\n", div);
    printf("Modulas =%d\n", modu);

    return 0;
}