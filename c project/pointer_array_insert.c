#include <stdio.h>
void insert(int n, int *p, int in, int se, int i)
{

    for (i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }

    printf("Enter the search value\n");
    scanf("%d", &se);

    for (i = 0; i < n; i++)
    {
        if (se == *(p + i))
        {
            printf("Enter the insert value\n");
            scanf("%d", &in);

            *(p + i) = in;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(p + i));
    }
}
int main()
{
    int n, i, a[10], in, se;

    printf("Enter the array size\n");
    scanf("%d", &n);
    insert(n, a, in, se, i);
}