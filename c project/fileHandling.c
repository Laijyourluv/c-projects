#include <stdio.h>
int main()
{

    FILE *p;
    char a;
    int num, num2;
    p = fopen("luv1.txt", "r");

    if (p == NULL)
    {
        printf("file is not exist\n");
    }

    else
    {

        fscanf(p, "%d", &num);
        fscanf(p, "%d", &num2);
        fclose(p);
        printf("value %d\n", num);
        printf("value =%d\n", num2);
        // while (1)
        // {
        //     a = fgetc(p);
        //     printf("%c", a);

        //     if (a == EOF) // EOF end of file
        //     {
        //         break;
        //     }
        // }
        printf("\n");
    }

    return 0;
}