#include <stdio.h>
void main()
{
    int n, i;

    printf("Enter the number \n");
    scanf("%d", &n);
    int a = 1, j = 2;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            a = a * i;
            // goto end;
        }
        // end:
        if (i > 1)
        {
            a = a * j;
        }
        printf("a=%d\n", a);
    }
}
