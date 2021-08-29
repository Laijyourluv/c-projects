#include <stdio.h>
void dlt(int n, int *p)
{
    int i, po;
    for (i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }
    printf("Enter the position\n");
    scanf("%d", &po);
    for (i = po - 1; i < n; i++)
    {
        *(p + i) = *(p + i + 1);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(p + i));
    }
}
int main()
{
    int n, a[10], i;

    printf("Enter the array size\n");
    scanf("%d", &n);

    dlt(n, a);
}