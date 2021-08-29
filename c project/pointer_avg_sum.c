#include <stdio.h>

void sumavg(int a, int b, int *s, float *av)
{
    *s = a + b;          // *s=&sum
    *av = (float)*s / 2; // *av=&avg
}
int main()
{
    int x, y;
    printf("Enter the value of x and y\n");
    scanf("%d %d", &x, &y);
    int sum;
    float avg;
    sumavg(x, y, &sum, &avg);

    printf("Sum=%d\n", sum);
    printf("Average=%f\n", avg);
    return 0;
}