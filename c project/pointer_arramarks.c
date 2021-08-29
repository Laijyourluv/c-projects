#include <stdio.h>
int main()
{

    int a[10];
    int *p;
    p = a;
    int i, n, m[10], r;
    int *q;
    q = m;
    printf("enter the size\n");
    scanf("%d", &n);

    printf("enter the roll number\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }

    printf("Enter the marks of students\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", q + i);
    }

    printf("Enter the roll number to print marks\n");
    scanf("%d", &r);
    for (i = 0; i < n; i++)
    {
        if (r == *(p + i))

        {

            printf("Marks of %d is %d\n", *(p + i), *(m + i));
        }
    }

    return 0;
}