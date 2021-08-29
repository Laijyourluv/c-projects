// C program to Open a File,
// Write in it, And Close the File

#include <stdio.h>
#include <string.h>

int main()
{

    char a[20] = "times of india ";
    char b[50] = "MR. Laijyour ";

    FILE *p;

    p = fopen("fgTest.txt", "w");

    if (p == NULL)
    {
        printf("file is not exist\n");
    }

    else
    {
        printf("file is open\n");

        fputs(a, p);
        fputs("\n", p);
        fputs(b, p);
        fclose(p);
        printf("Data print succesfully\n");
    }
}