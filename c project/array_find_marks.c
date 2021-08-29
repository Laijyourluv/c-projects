#include <stdio.h>
int main()
{
    int a[10];
    int i, n, m[10], r;

    printf("enter the size\n");
    scanf("%d", &n);

    printf("enter the roll number\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the marks of students\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }

    printf("Enter the roll number to print marks\n");
    scanf("%d", &r);
    for (i = 0; i < n; i++)
    {
        if (r == a[i])

        
        {

            printf("Marks of %d is %d\n", a[i], m[i]);
        }
    }

    // a[i] = m[i];

    // for (i = 0; i < n; i++)
    // {

    //     printf("Marks of %d is %d\n", a[i], m[i]);
    // }

    return 0;
}