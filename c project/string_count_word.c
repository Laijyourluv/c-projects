
#include <stdio.h>
#include <string.h>

void main()
{
    int l = 0;
    char a[100];
    int count = 0, i;

    printf("Enter the string:\n");
    scanf("%[^\n]s", &a);

    char b[100];
    scanf("%s", &b);

    // char c[100];
    // scanf("%s", &c);
    int p = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ' && a[i + 1] != ' ')
        {
            p = p + 1;
        }
    }
    // printf("%c\n", s[i]);
    printf("Number of  words in given string are: %d\n", p + 1);

    // printf("Number of words in given string are: %d\n", count + 1);
}