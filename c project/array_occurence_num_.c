#include <stdio.h>
int main()
{
    int a[10];

    int i, n, j = 0, k = 0, p = 0;
    printf("enter the number\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the searching element\n");
    scanf("%d", &n);

    for (i = 0; i < 5; i++)
    {
        if (n == a[i])
        {
            j = j + 1;
            // printf("indices postion of element=%d\n\n", i);
        }
    }
    printf("Occurence of searching number is %d\n", j);
    return 0;
}