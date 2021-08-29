#include <stdio.h>
int main()
{
    int a[10];
    int i, j = 0, p = 0;
    printf("Enter the elements\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int n, r;
    printf("Enter the search element\n");
    scanf("%d", &n);

    for (i = 0; i < 5; i++)
    {
        if (n == a[i])
        {

            j = 1;
            p = i;
            break;
        }
    }
    if (j > 0)

    {
        printf("Enter the number to replacing search number\n");
        scanf("%d", &r);
        a[p] = r;
        for (i = 0; i < 5; i++)
        {
            printf("%d\n", a[i]);
        }
    }

    return 0;
}
