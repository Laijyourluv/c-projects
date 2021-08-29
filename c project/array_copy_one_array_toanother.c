#include <stdio.h>
int main()
{
    int a[10], b[10];
    int i;

    printf("Enter the elewments\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    // {
    //     b[i] = a[i] * a[i];

    //     printf("elements=%d\n", b[i]);

        {
            b[i] = a[i];
            printf("Elements=%d\n", b[i]);
        }
    // }
    /*  for (i = 0; i < 5; i++)
    {
        b[i] = a[i];
        printf("Elements=%d\n", b[i]);
    }*/

    return 0;
}
