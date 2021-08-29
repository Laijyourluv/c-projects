#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char b[100];
    gets(a);
    gets(b);
    // strcpy(a, b);
    // printf("After copy \n");
    // printf("a= %s\n b= %s\n", a, b);
    int i;

    for (i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[i];
    }
    printf("After copy\n");
    for (i = 0; a[i] != '\0'; i++)
    {
        printf("%c", b[i]);
    }
    printf("\n");
    for (i = 0; a[i] != '\0'; i++)
    {
        printf("%c", a[i]);
    }

    printf("\n");
    return 0;
}