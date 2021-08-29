#include <stdio.h>
#include <string.h>
int main()
{
    int i, l = 0;
    char n[50];
    gets(n);
    // printf("Enter the character\n");

    // gets(n);

    // int r;
    // int i;
    // strrev(n); // reverse keyword
    // char a[100];
    // printf("%s\n", n);
    for (i = 0; n[i] != 0; i++)
    {
        l = l + 1;
    }
    printf("length=%d\n", l);

    printf("after reversing\n");
    int j;
    for (j = l - 1; j >= 0; j--)
    {
        printf("%c", n[j]);
    }

    printf("\n\n");

    return 0;
}