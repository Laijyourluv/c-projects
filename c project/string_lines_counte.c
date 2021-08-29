#include <stdio.h>

#include <string.h>
int main()
{
    int b;
    int m;
    int l = 0, i, w = 0, k = 0, c = 0, s = 0, p = 0, u = 0, z = 0, x = 0;
    char a[100];

    printf("Enter the cahracters \n");
    scanf("%[^#]", &a); // scanf function terminated by print # + enter

    printf("\n\n");
    for (i = 0; a[i] != '\0'; i++)
    {

        if (a[i] == ' ')
        {
            c = c + 1;
        }

        else if (a[i] == '\t')
        {
            k = k + 1;
        }

        else if (a[i] == '\n')
        {
            x = x + 1;
        }
        else if (a[i] >= 65 || a[i] >= 97 && a[i] <= 90 || a[i] <= 122 && a[i + 1] == ' ')
        {
            w = w + 1;
        }
        else if (a[i] == ' ' || a[i + 1] != ' ' || a[i] == '\t' || a[i + 1] == '\t')
        {
            p = p + 1;
        }
    }
    printf("number of words %d\n", p);
    printf("number of characters %d\n", w);
    printf(" number of Space %d\n", c);
    printf("Number of tab %d\n", k);
    printf("number of lines %d\n", x);
    return 0;
}
