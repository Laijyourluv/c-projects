#include <stdio.h>
int main()
{
    FILE *p;

    int n=26;

    p = fopen("luv.txt", "w");
    if (p == NULL)
    {
        printf("File not exist\n");
    }
    else
    {
        fprintf(p, "the num is %d", n);
        fclose(p);
    }

    return 0;
}