#include <stdio.h>
int main()
{
    int n, i = 0, j = 0;

    printf("enter the Value\n");
    scanf("%d", &n);

    
    do{

        printf("i=%d\n", i);
        i = i + 2;
        j = j + 1;
    }
    while (j <= n - 1);

    return 0;
}