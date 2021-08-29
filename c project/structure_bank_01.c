#include <stdio.h>
#include <stdlib.h>
struct bank
{

    int c;
    char n[10];
    long int a, m, ac, b;
    char nm[10];
};
void main()
{
    struct bank lj[100];

    long int w, Ac;
    int p = 0;
    int o, i = 0, j;
    while (1)
    {
        printf("\n\n");
        printf("Welcome to Lj Bank\n");
        printf("Please following guidlines Details \n ");
        printf("Enter : 1 to Open Account\n");
        printf("Enter : 2 to show data of Customer \n");
        printf("Enter : 3 to check Balance\n");
        printf("Enter : 4 to Deposit Money\n");
        printf("Enter : 5 to Widtraw Money\n");
        printf("Enter : 6 to Exist\n");
        scanf("%d", &o);
        switch (o)
        {
        case 1:

            printf("\nEnter  your Aadhar card Number\n");
            scanf("%ld", &lj[i].a);
            printf("Enter your Mobile Number\n");
            scanf("%ld", &lj[i].m);
            printf("Enter your name\n");
            scanf("%s", &lj[i].nm);
            printf("Your Account opened\n");
            printf("Enter the Account Number\n");
            scanf("%ld", &lj[i].ac);
            printf("Enter the Balance in Account\n");
            scanf("%ld", &lj[i].b);
            i++;
            break;
        case 2:
            for (j = 0; j < i; j++)
            {

                printf("\nAccount Number : %ld\n", lj[j].ac);
                printf("Name           : %s\n", lj[j].nm);
                printf("Balance        : %ld\n", lj[j].b);
                printf("Mobile  Number : %ld\n", lj[j].m);
            }
            break;

        case 3:

            printf("\nEnter Your Account Number\n");
            scanf("%d", &Ac);
            for (j = 0; j < i; j++)
            {
                if (Ac == lj[i].ac)
                {
                    printf("\nEnter the Widthrawal Amount\n");
                    scanf("%ld", &w);
                    lj[i].b = lj[i].b - w;
                    printf("Your widthrawal Succed : %ld\n", w);
                    printf("Remainning Balance :%ld-%ld=%ld\n", lj[i].b, w, lj[i].b - w);
                    p = 1;
                }
            }
            if (p == 0)
            {
                printf("Invalid account number\n");
            }
            break;
        case 4:
            printf("\nEnter Your Account Number\n");
            scanf("%d", &Ac);
            for (j = 0; j < i; j++)
            {
                if (Ac == lj[i].ac)
                {
                    printf("\nEnter the Deposit Amount\n");
                    scanf("%ld", &w);
                    lj[i].b = lj[i].b + w;
                    printf("Your Deposit Succed : %ld\n", w);
                    printf("Total Balance :%ld-%ld=%ld\n", lj[i].b, w, lj[i].b + w);
                    p = 1;
                }
            }
            if (p == 0)
            {
                printf("Invalid account number\n");
            }

        case 5:
            printf("Enter Your Account Number\n");
            scanf("%d", &Ac);
            for (j = 0; j < i; j++)
            {
                if (Ac == lj[i].ac)
                {

                    printf("\nTotal Balance :%ld\n", lj[i].b);
                    p = 1;
                }
            }
            if (p == 0)
            {
                printf("Invalid account number\n");
            }
            printf("\n\n");
        case 6:
            exit(0);
        }
    }
}