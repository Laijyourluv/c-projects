#include <stdio.h>
#include <string.h>
void main()
{
    char *name = "royalblood";
    int i, j;

    printf("%s\n", name);
    j = strlen(name);
    printf("\n\n");

    printf("Length of name %d\n", j);
    for (i = 0; i < j; i++)
    {
        printf("%c", *name++);
    }
    printf("\n\n");
}