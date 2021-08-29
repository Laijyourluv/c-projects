

#include <stdio.h>
#include <string.h>

struct cricket
{
    int a, in, r;
    char n[10];
};
void main()
{
    struct cricket s[3];
    struct cricket t;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        printf("Enter the Name of cricketer\n");
        scanf("%s", &s[i].n);
        printf("Enter the Age of cricketers \n");
        scanf("%d", &s[i].a);
        printf("Enter the all Innings of Cricketers\n");
        scanf("%d", &s[i].in);
        printf("Enter the Runs Of All Inninngs\n ");
        scanf("%d", &s[i].r);
    }
    printf("Runs in ascending orders\n");
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {

            if (s[i].r > s[j].r)
            {
                t.a = s[i].a;
                strcpy(t.n, s[i].n);

                t.in = s[i].in;
                t.r = s[i].r;

                s[i].a = s[j].a;
                strcpy(s[i].n, s[j].n);
                s[i].in = s[j].in;
                s[i].r = s[j].r;

                s[j].a = t.a;
                s[j].in = t.in;
                s[j].r = t.r;
                strcpy(s[j].n, t.n);
            }
        }

        printf("Name : %s\n age : %d \n Innings : %d\n Runs  :%d\n\n", s[i].n, s[i].a, s[i].in, s[i].r);
    }
}