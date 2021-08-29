#include <stdio.h>
int main()
{
    int n, t, a, b, i;

    printf("Enter number \n");
    scanf("%d", &n);

    printf("Enter the number a and b \n");
    scanf("%d %d", &a, &b);

    while (i >a && i< b)
    {
        t = n * i;
        printf("t=%d\n", t);
        i = i + 1;
    }

    return 0;
}