#include <stdio.h>
int main()
{
    int a, b, c, max;

    printf("Enter the  value of a b and c\n");
    scanf("%d %d %d", &a, &b, &c);
    //  condn ? true:false

    max = a > b && a > c ? a : b > c ? b : c;
                                     
    printf("Max value is %d", max);
    return 0;
}