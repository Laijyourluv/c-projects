
#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;
    char string[100];
    gets(string);
    // printf("\nString before to strlwr : %s", string);

    // strupr(string);

    // printf("\nString after strlwr : %s", string);

    for (i = 0; string[i] != '\0'; i++)
    {
        printf("%c", string[i] - 32);
    }

    printf("\n");

    return 0;
}
