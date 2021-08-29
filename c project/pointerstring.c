#include <stdio.h>
const int max = 5; //global declaration
int main()
{
    int i;
    char name[] = {'a', 'p', 'p', 'l', 'e', '\0'};
    char *n;
    n = name;
    while (*n != NULL)
    {

        printf("%c", *n);
        // puts(name[i]);

        n++;
    }
    printf("\n");
    return 0;
}