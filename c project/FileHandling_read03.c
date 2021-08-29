#include <stdio.h>
int main()
{

    char d;
    FILE *p;

    p = fopen("luv3.txt", "r");

    if (p == NULL)
    {
        printf("file isw not open\n");
    }

    else
    {

        printf(" File is Open\n");
        while (1)
        {

            d = fgetc(p);
            printf("%c", d);
            if (d == EOF)
            {
                break;
            }
        }
    }
    return 0;
}