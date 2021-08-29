#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];

    printf("Enter the any characters\n");
    gets(a);

    // puts(a);

    // int length;

    // length = strlen(a);
    // printf("lenght of sting =%d\n", length);
    int l = 0;
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        l = l + 1;
    }
    printf("l=%d\n", l);
    return 0;
}