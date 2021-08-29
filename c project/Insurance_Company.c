#include <stdio.h>
int main()
{
    int a, m, r, c;

    printf("Enter the age \n");
    scanf("%d", &a);

    printf("Region of  Car Manufactured \n 1. india \n 2.other \n ");
    scanf("%d", &m);

    printf("Enter the Accidental Record \n 1. good \n 2. Not-good\n");
    scanf("%d", &r);

    if (a >= 25)
    {
        if (m == 1)
        {
            if (r == 1)
            {
                // c = (6 * a) / 100;
                printf("Charge 6 per =%d\n", c);
                printf("Comprehensive policy");
            }
            else if (r == 2)
            {
                // // c = (7 * a) / 100;
                printf("Charge 7 per =%d\n", c);
                printf("Comprehensive policy\n");
                printf("Holder pay 100 rupees of claim \n");
            }
        }

        else if (m == 2)
        {
            if (r == 1)
            {
                printf("Charge 6 per =%d\n", c);
                printf("Comprehensive policy");
                printf("Holder pay 100 rupees of claim \n");
            }
            else if (r == 2)
            {

                printf("Charge 6 per =%d\n", c);
                printf("Third party  policy");
            }
        }
    }
    else if (a < 25)
    {
        if (m == 1)
        {
            if (r == 1)
            {
                printf("Charge 6 per =%d\n", c);
                printf("Comprehensive policy");
                printf("Holder pay 100 rupees of claim \n");
            }
        }
        else if (m == 2)
        {
            if (r == 1)
            {
                printf("Charge 8 per =%d\n", c);
                printf("Comprehensive policy");
                printf("Holder pay 100 rupees of claim \n");
            }

            else if (r == 2)
            {
                printf("No policy be given\n");
            }
        }
    }
    return 0;
}