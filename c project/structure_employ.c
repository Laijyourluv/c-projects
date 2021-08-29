#include <stdio.h>

struct employ
{
    int c, d, date;
    char n[10];
};
void main()
{
    struct employ e[5];

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the name of Employe\n");
        scanf("%s", &e[i].n);
        printf("Enter the joining year\n");
        scanf("%d", &e[i].d);
        printf("Enter the Employe Code\n");
        scanf("%d", &e[i].c);
        printf("Enter the current date \n");
        scanf("%d", &e[i].date);
    }
    printf("Name Of Employe Who have 3 or more than 3 years in working\n ");
    for (i = 0; i < 5; i++)
    {
        if (e[i].date - e[i].d >= 3)
        {
            printf("Name : %s\n", e[i].n);
        }
    }
}