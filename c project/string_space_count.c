
#include <stdio.h>
#include <string.h>

int main()
{
    char a[50];
    int i, c = 0;
    printf("Enter the cahracters \n");

    gets(a);

    for (i = 0; a[i] != '\0'; i++)
    {

        if (a[i] == ' ' || '\t')
        {
            c = c + 1;
        }
    }

    printf(" number of Space %d\n", c);

    return 0;
}
