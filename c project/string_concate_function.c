#include <stdio.h>
void str_concate_luv(char a[], char b[])
{
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        printf("%c", a[i]);
    }
    for (i = 0; b[i] != '\0'; i++)
    {
        printf("%c", b[i]);
    }
    printf("\n");
}
void main()
{
    char a[100], b[100];
    gets(a);
    gets(b);
    int q;
    printf("Enter 1.for concate\n");
    scanf("%d", &q);

    switch (q)
    {
    case 1:
        str_concate_luv(b, a);
        break;

    default:
        break;
    }
}