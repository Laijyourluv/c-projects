
#include <stdio.h>
#include <string.h>

void luv(char a[], char b)
{
    int i, k = 0;

    for (i = 0; a[i] != NULL; i++)
    {

        if (b == a[i])
        {
            k = k + 1;
        }
    }
    printf(" frequency %d\n", k);
}

void main()
{
    printf("Enter the Word\n");
    char a[100];
    gets(a);
    printf("Enter the single char whose frequency u want\n");
    char b;
    scanf("%c", &b);

    // b = getche();

    luv(a, b);
}
