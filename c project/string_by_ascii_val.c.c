#include <Stdio.h>

#include <string.h>

void main()
{
    char i;
    printf("Uppercase\n\n");
    for (i = 65; i <= 90; i++)
    {
        printf("%c\t", i);
    }

    printf("\n\nlowercase\n");

    for (i = 97; i <= 122; i++)
    {
        printf("%c\t", i);
    }
    printf("\n\n");
    printf("\n\nspecial characters\n");

    for (i = 32; i <= 47; i++)
    {
        printf("%c\t", i);
    }
    for (i = 58; i <= 64; i++)
    {
        printf("%c\t", i);
    }
    for (i = 123; i <= 126; i++)
    {
        printf("%c\t", i);
    }
    for (i = 91; i <= 96; i++)
    {
        printf("%c\t", i);
    }

    printf("\n\n\n ");

    printf("\n\ncounting\n");
    for (i = 48; i <= 57; i++)
    {
        printf("%c\t", i);
    }
    printf("\n\n\n ");
}