#include <stdio.h>
struct detail
{
    char a[10];
    int b;
};

void main()
{
    struct detail d[10];
    struct detail *p;
    p = d;

    int i;
    // for (i = 0; i < 3; i++)
    // {
    //     p + i = &d[i];
    // }

    for (i = 0; i < 3; i++)
    {

        printf("Enter the name of student\n");
        scanf("%s", (p + i)->a);

        printf("Enter the marks of student\n");
        scanf("%d", &(p + i)->b); // we can't use p+i in case of int or float
    }

    for (i = 0; i < 3; i++)
    {
        printf("%s\n", (p + i)->a);
        printf("%d\n", (p + i)->b);
    }
}
