#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char a[50];
    FILE *p;
    p = fopen("luv03.txt", "w");

    for (i = 0; i < 20; i++)
    {
        scanf("%c", &a[i]);
    }

    gets(a);
    if (p == NULL)
    {
        printf("file is not exist\n");
    }

    else
    {
        for (i = 0; a[i] != NULL; i++)
        {
            fputc(p, "%c", a);
            // fputs(a, p);
            // fputs("\n", p);
        }
        fclose(p);
        printf("your data is printed\n");

        printf("File is open\n");
    }
}