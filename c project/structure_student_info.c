#include <stdio.h>

struct info
{
    int y, j;
    char x[10], d[10], c[10];
};
void main()
{
    struct info l[100];
    printf("Size is %d\n", sizeof(l));
    int N, i, roll;
    printf("Enter the Number of students\n");
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        printf("Enter  the Name\n");
        scanf("%s", &l[i].x);
        printf("Enter the Roll Number\n");
        scanf("%d", &l[i].y);
        printf("Enter the joining year\n");
        scanf("%d", &l[i].j);
        printf("Enter the Departmen\n");
        scanf("%s", &l[i].d);
        printf("Enter the course\n");
        scanf("%s", &l[i].c);
    }
    int s, p, v = 0;

    printf("Enter the \n 1. for particular year \n 2. Roll no. Given\n ");
    scanf("%d", &s);

    switch (s)
    {
    case 1:
        printf("Enter the particular year\n");
        scanf("%d", &p);
        for (i = 0; i < N; i++)
        {
            if (p == l[i].j)
            {

                printf("Name : %s\n", l[i].x);
                v = 1;
            }
        }
        if (v == 0)
        {
            printf("Invalid year\n");
        }

        break;
    case 2:
        printf("Enter the Roll Number\n");
        scanf("%d", &roll);
        for (i = 0; i < N; i++)
        {
            if (roll == l[i].y)
            {

                printf("\nName : %s\nRoll No. : %d\nDepartment : %s\n Course : %s\n Joining Year : %d\n", l[i].x, l[i].y, l[i].d, l[i].c, l[i].j);
                v = 1;
            }
        }
        if (v == 0)
        {
            printf("Invalid Roll Number\n");
        }

        break;
    default:
        break;
    }
}