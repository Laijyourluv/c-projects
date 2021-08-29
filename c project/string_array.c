
#include <stdio.h>
#include <string.h>
int main()
{
    char a[10][10];
    int i, j, l = 0, n;
    printf("Enter the size of string array\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {

        // for (j = 0; j < 5; j++)
        // {
        printf("Enter the name\n");
        scanf("%s", &a[i]);
        // }
    }

    for (i = 0; i < n; i++)
    {
        // l = strlen(a[i]);
        for (j = 0; a[i][j] != NULL; j++)
            l++;
        printf("%s length=%d\n", a[i], l);
        l = 0;
    }
}