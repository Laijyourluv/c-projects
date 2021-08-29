#include <stdio.h>
int main()
{
    int n, i = 1, j = 1, k;
    printf("Enter the number\n");
    scanf("%d", &n);

   
   do {
        if (j % 2 == 0)
        {
            k = i * -1;
            printf("i=%d\n", k);
        }
        else
        {
            printf("i=%d\n", i);
        }
        i = i + 2;
        j = j + 1;
    } while (j <= n);
    return 0;
}