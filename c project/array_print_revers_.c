#include <stdio.h>
int main()
{
    int a[10];
    int i;

    printf("Enter the numbers\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 4; i >= 0; i--)

    {
        printf("Reverse num=%d\n", a[i]);
    }

    return 0;
}