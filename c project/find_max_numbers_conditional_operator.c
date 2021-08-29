#include <stdio.h>
int main()
{
    int a, b, max;

    printf("Enter the value of a and b\n");
    scanf("%d %d", &a, &b);

    // condn? true:false;
    
    max = a > b ? a : b;

    printf("  max value is %d", max);

    return 0;
}