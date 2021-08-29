#include <stdio.h>
#include <string.h>
void main()
{
    printf("Enter the characters\n");
    char a[100];
    gets(a);

    int i, j, l = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        l = l + 1;
    }

    for (i = 0; a[i] != '\0'; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", a[j]);
        }
        printf("\n");
    }

    for (i = l - 2; a[i] >= '\0'; i--)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", a[j]);
        }
        printf("\n");
    }
}