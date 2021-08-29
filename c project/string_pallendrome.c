#include <stdio.h>
#include <string.h>

void pallendrome()
{
    printf("Enter the text\n");
    char n[50];
    gets(n);

    int i, l = 0;
    for (i = 0; n[i] != 0; i++)
    {
        l = l + 1;
    }
    printf("length=%d\n", l);

    printf("Entered String\n");

    for (i = 0; i <= l; i++)
    {
        printf("%c", n[i]);
    }
    printf("\n");
    printf("after reversing\n");
    int j;
    for (j = l - 1; j >= 0; j--)
    {
        printf("%c", n[j]);
    }

    printf("\n\n");
    int k = 0, s = 0;
    for (i = 0, j = l - 1; n[i] != '\0' && j >= 0; i++, j--)
    {

        if (n[i] == n[j])
        {

            k = k + 1;
        }

        s = s + 1;
    }
    if (k == s)
    {
        printf(" pallendrome\n");
    }
    else
    {
        printf("not pallendrome\n");
    }

    printf("\n");

    pallendrome(n);
}
void main()
{

    pallendrome();
}