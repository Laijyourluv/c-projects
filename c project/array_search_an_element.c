#include <stdio.h>
int main()
{
    int i, j;
    int a[10]; //= {1, 2, 3, 4, 5};

    printf("Enter the elemnt\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int n;

    printf("Enter the elemnet for searching\n");

    scanf("%d", &n);

    for (i = 0; i < 5; i++)
    {
        if (n == a[i])
        {

            j = 1;
            break;
        }
        else
        {

            j = 0;
        }
    }

    if (j > 0)
    {

        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}