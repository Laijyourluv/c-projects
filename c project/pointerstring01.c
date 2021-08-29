#include <stdio.h>
const int max = 5; //global declaration
int main()
{
    int i;
    char *name[] = {"apple", "microsoft", "paytm", "tata", "oyo","tesla"};

    for (i = 0; i < max; i++)
    {
        // printf("%s\n", name[i]);
        puts(name[i]);  
    }

    return 0;
}