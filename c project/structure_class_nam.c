#include <stdio.h>

struct class
{
    char g[10], l[10], f[10], m[10];
};
void main()
{
    struct class n;
    int i;
    printf("Enter the gender\n");
    scanf("%s", &n.g);
    printf("Enter the Last Name\n");
    scanf("%s", &n.l);
    printf("Enter the First Name\n");
    scanf("%s", &n.f);
    printf("Enter the Middle Name\n");
    scanf("%s", &n.m);
    char a[10] = "male";
    char b[10] = "female";
    int s;
    printf("Enter\n 1. Full Name \n 2. Short Name\n");
    scanf("%d", &s);
    switch (s)
    {
    case 1:
        if (strcmp(n.g, a) == 0)
        {
            printf("Mr");
            printf(" %s %s %s\n", n.l, n.f, n.m);
        }
        else if (strcmp(n.g, b) == 0)
        {
            printf("Ms");
            printf(" %s %s %s\n", n.l, n.f, n.m);
        }
        else
        {
            printf("Invalid choice\n");
        }
        break;
    case 2:

        for (i = 0; i < 1; i++)
        {
            printf("%c %c", n.f[i], n.m[i]);
        }

        printf("\t%s\n", n.l);
        break;
    default:
        printf("you Enter wrong choice\n");
        break;
    }
}