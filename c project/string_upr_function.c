#include <stdio.h>
#include <string.h>

void str_upr_luv(char a[])
{
    int i;

    for (i = 0; a[i] != NULL; i++)
    {
        printf("%c", a[i] - 32);
    }
    printf("\n");
}
void main()
{
    char a[100];
    gets(a);

    str_upr_luv(a);
}