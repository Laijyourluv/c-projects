#include <stdio.h>
#include <string.h>

void main()
{
    char a[100], b[100];
    gets(a);
    gets(b);
    str_cpy_luv(a, b);
}

void str_cpy_luv(char a[], char b[])
{

    int i;

    for (i = 0; a[i] != NULL; i++)
    {
        b[i] = a[i];
    }

    printf("\n");
    for (i = 0; a[i] != NULL; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");
    for (i = 0; a[i] != NULL; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");
}