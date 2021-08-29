#include <stdio.h>

int main()
{
    int ms, g, a;

    printf("enter the martial status press \n 1. married\n 2. unmarried \n");
    scanf("%d", &ms);

        if (ms == 1)
    {

        printf("Driver Insured\n");
    }

    else if (ms == 2)
    {
        printf("enter the gender press\n 1. male \n 2. female \n");
        scanf("%d", &g);

        if (g == 1)
        {
            printf("enter the age \n");
            scanf("%d", &a);

            if (a >= 30)
            {
                printf("Driver Insured\n");
            }

            else
            {
                printf("Driver Not Insured\n");
            }
        }

        else if (g == 2)
        {
            printf("enter the age \n");
            scanf("%d", &a);

            if (a >= 25)
            {
                printf("Driver Insured\n");
            }
            else
            {
                printf("Driver Not Insured\n");
            }
        }
        else
        {
            printf("Invalid choice");
        }
    }
    else
    {
        printf("Invalide ");
    }

    return 0;
}