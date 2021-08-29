#include <stdio.h>
#include <stdlib.h>
void copy(int n, int *p, int b[10])
{
    int i;
    p = (int *)malloc(n * sizeof(int)); // malloc function for dynamic memeory allocation

    for (i = 0; i < n; i++)
    {
        printf("Enter the elements of a[%d]\n", i);
        scanf("%d", (p + i)); // p+i use for address
    }

    for (i = 0; i < n; i++)
    {
        b[i] = *(p + i); // it indicate values

        printf("Elements of b[%d]\t is %d\n\n", i, b[i]);
    }
}
void main()
{
    int n, a[10], b[10];
    // int *p;

    printf("Enter the array length\n");
    scanf("%d", &n);

    copy(n, a, b);
}