#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* int getche();

    char X;
    X = getche();
    printf("\n");

    printf("Ascii value of %c is %d\n", X, X);
    printf("\n");

    char Y;
    Y = getche();

    printf("\n");

    printf("Ascii value of %c is %d\n", Y, Y);
    printf("\n");

    if (X > Y)
    {
        printf("X>>Y\t");
        printf("1");
    }
    else if (X == Y)
    {
        printf("X==Y\t");
        printf("0");
    }

    else
    {
        printf("X<<Y\t");
        printf("-1");
    }
    printf("\n"); */

    char a[100];
    gets(a);

    char b[100];
    gets(b);

    int r;

    r = strcmp(a, b);


   printf("strcmp(a,b)=%d\n", r);
}