#include <stdio.h>
#include <string.h>
void main()
{
    char a[100];
    char b[100];

    gets(a);
    gets(b);
    // strcat(b, a);

    // printf("%s\n", b);
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        printf("%c", a[i]);
    }
    for (i = 0; b[i] != '\0'; i++)
    {
        printf("%c", b[i]);
    }
    printf("\n");
}
