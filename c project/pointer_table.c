#include <stdio.h>
int main()
{
    int a[10];
    int *ptr;
    ptr = a;
    int n, i;
    printf("enter any number whose table to want print\n");
    scanf("%d", &n);

    for (i = 0; i < 10; i++)
    {
        a[i] = n * (i + 1);
        
        printf("%dx%d=%d\n", n, i + 1, ptr[i]);
    }

    return 0;
}