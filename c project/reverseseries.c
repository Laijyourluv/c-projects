#include <stdio.h>
int main()
{
    int n, i ;

    printf("enter the Value\n");
    scanf("%d", &n);
    
    i = n;
    while (i >= 1)
    {

        printf("i=%d\n", i);

        i = i - 1;
    }

    return 0;
}