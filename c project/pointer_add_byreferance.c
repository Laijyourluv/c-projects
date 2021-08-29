#include <stdio.h>
int addpoint(int *x, int *y)
{
    int sum;
    sum = *x + *y;
    return sum;
}
int main()
{
    int a, b, sum;

    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);

    sum = addpoint(&a, &b);
    printf("Sum =%d\n", sum);
}