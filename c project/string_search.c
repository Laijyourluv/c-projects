#include <stdio.h>
int main()
{
    int i;

    char a[100];

    char b, s;

    printf("Enter any string\n");
    gets(a);

    printf("Enter the searching elemnts\n");
    //scanf("%c", &b);
    b = getche(); // getche fun reads only single caharacters
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == b)
        {
            printf("\n");
            printf("Enter the replacing elements\n");
            //scanf("%c", &s);
            s = getche(); // getche fun reads only single caharacters

            a[i] = s;
        }
    }

    printf("\nUpdated String is \n");
    puts(a);
    return 0;
}