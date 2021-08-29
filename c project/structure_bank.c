#include <stdio.h>
struct bank
{
    char n[10];
    int a, b, c, d;
};
void main()
{
    struct bank i[100];
    int d, m, x, j, N, z = 0, p;
    printf("\nEnter How many coustumers record you have\n");
    scanf("%d", &N);
    for (j = 0; j < N; j++)
    {
        printf("Enter the Account Number\n");
        scanf("%d", &i[j].a);
        printf("Enter the Name \n");
        scanf("%s", &i[j].n);
        printf("enter the Balance \n");
        scanf("%d", &i[j].b);
    }
    int s;
    printf("enter\n 1. amount less than 100 \n 2. more\n");
    scanf("%d", &s);
    switch (s)
    {
    case 1:

        for (j = 0; j < N; j++)
        {
            if (i[j].b <= 100)
            {

                printf(" \n\nAccount numvber : %d \n Name : %s\n Balance :%d \n", i[j].a, i[j].n, i[j].b);
            }
        }

        break;

    case 2:

        printf("enter \n1. widthdrawal\n 2.  deposit\n ");
        scanf("%d", &d);
        switch (d)
        {
        case 1:

            printf("Enter the Account Number\n");
            scanf("%d", &m);

            for (j = 0; j < N; j++)
            {
                if (m == i[j].a)
                {

                    printf("*j=%d\n", j);
                    goto end;
                }
            }
        end:
            if (m == i[j].a)
            {
                for (p = j; p < N; p++)
                {

                    if (i[j].b <= 100)
                    
                    {
                        printf("Your amount less than 100 so  you can't widthraw\n ");
                    }
                    else if (i[j].b > 100)
                    {
                        printf("enter the widthrawal amount\n");
                        scanf("%d", &i[j].c);
                        printf("Your widhrawal succed of : %d\n", i[j].c);
                        printf("Remaining account balance :%d-%d=%d\n", i[j].b, i[j].c, i[j].b - i[j].c);
                    }
                    break;
                }
            }
            else
            {

                printf("U don't have account\n");
            }
            break;
        case 2:
            printf("Enter your account number\n");
            scanf("%d", &x);
            for (j = 0; j < N; j++)
            {

                if (x == i[j].a)
                {

                    printf("J=%d\n", j);

                    goto label;
                }
            }

        label:
            if (x == i[j].a)

            {
                for (p = j; p < N; j++)
                {
                    if (x == i[j].a)
                    {
                        printf("Enter Amount for Deposting in a bank\n");
                        scanf("%d", &i[j].d);

                        printf("Your amount : %d\n", i[j].b);
                        printf("Your Total Deposited Amount :%d+%d=%d\n", i[j].b, i[j].d, i[j].b + i[j].d);
                    }
                    break;
                }
            }
            else
            {
                printf("You don't have account in this bank\n");
            }
        default:
            break;
        }
        break;
    default:
        break;
    }
}