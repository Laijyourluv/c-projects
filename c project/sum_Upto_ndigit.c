#include <stdio.h>
int main()
{
    int n, s;

    printf("Enter the number\n");
    scanf("%d", &n);

    s= n*(n+1)/2;

    printf("Sum=%d\n",s);

    return 0;
}