#include <stdio.h>
int main()
{
    int p, b, r = 1, i = 1, k = 1;

    printf("Enter the base and power\n");
    scanf("%d  %d", &b, &p);

    while (i <= p)
    {

        if (r == 0)
        {
+            printf("r=%d\n", k);
        }
        r = r * b;

        i = i + 1;
    }
    printf("Result=%d\n", r);
    return 0;
}