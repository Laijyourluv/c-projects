
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    // scanf("%s", &a);

    gets(a);
    // printf("\nString before to strlwr : %s", string);

    // strlwr(string);
    // printf("\nString after strlwr : %s", string);
    // printf("\n");0

    int i = 0;
    for (i; a[i] != '\0'; i++)

        printf("%c", a[i] + 32);

    printf("\n\n");
    return 0;
}