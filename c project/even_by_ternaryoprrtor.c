#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number \n");
    scanf("%d", &n);

    // condn ? true: false;
    n % 2 == 0 ? printf("Even") : printf("Odd");

    
    return 0;
}