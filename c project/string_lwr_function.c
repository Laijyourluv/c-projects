#include <stdio.h>
#include <string.h>

int lwr_luv(char a[]);

void main()
{
    char a[100];

    gets(a);

    lwr_luv(a);
}

int lwr_luv(char a[])
{
    int i;

    for (i = 0; a[i] != NULL; i++)
    {

        printf("%c", a[i] + 32);
    }
    printf("\n");
}