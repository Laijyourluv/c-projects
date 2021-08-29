#include <stdio.h>
int main()
{
    int t, c, mi, a, p;
    float id, ga, un;

    printf("Chose which type of microproceesor u Want\n 1. 8-bit\n 2. 16-bit\n 3. 32-bit\n");
    scanf("%d", &mi);

    printf("Enter the amount \n");
    scanf("%d", &a);

    printf("Choose types of customer \n 1. Indusry \n 2. government \n 3. University\n");
    scanf("%d", &t);

    if (mi == 3)
    {
        if (a < 50000)
        {
            if (t == 1)
            {
                id = a - (5 * a) / 100;
                printf("5-per Discount to industrial agency=%.2f\n", id);
            }

            else if (t == 2)
            {
                ga = a - (6.5 * a) / 100;

                printf("6.5 per discount givent to government agency=%.2f\n", ga);
            }
            else
            {
                printf("no discount");
            }
        }

        else if (a >= 50000)
        {
            if (t == 1)
            {
                id = a - (7.5 * a) / 100;
                printf("7.5-per Discount to industrial agency=%.2f\n", id);
            }

            else if (t == 2)
            {
                ga = a - (8.5 * a) / 100;

                printf("8.5 per discount givent to government agency=%.2f\n", ga);
            }
            else
            {
                printf("no discount");
            }
        }
        else if (a > 100000)
        {
            if (t == 1)
            {
                id = a - (10 * a) / 100;
                printf("10-per Discount to industrial agency=%.2f\n", id);
            }
            else if (t == 2)
            {

                ga = a - (10 * a) / 100;

                printf("Payment after 10 per discount givent to government agency=%.2f\n", ga);
            }
            else
            {
                printf("no discount");
            }
        }
        else
        {
            if (t == 3)
            {
                un = a - (7.5 * a) / 100;

                printf("University Discount 7.5 per=%.2f\n", un);
            }
        }
    }

    else if (mi == 2)
    {
        if (a < 10000)
        {
            printf(" Amount =%.2d\n", a);
        }
        if (a >= 10000)
        {
            if (t == 1)
            {
                id = a - (5 * a) / 100;
                printf("5-per Discount to industrial agency=%.2f\n", id);
            }
            else if (t == 2)
            {
                ga = a - (6 * a) / 100;
                printf("6-per discount givent to government agency=%.2f\n", ga);
            }
            else
            {
                un = a - (5 * a) / 100;
                printf("5-per University Discount =%.2f\n", un);
            }
        }
    }

    else
    {

        if (t == 1)
        {
            id = a - (10 * a) / 100;
            printf("10-per Discount to industrial agency=%f\n", id);
        }

        else if (t == 2)
        {
            ga = a - (10 * a) / 100;
            printf("10 per discount givent to government agency=%f\n", ga);
        }

        else

        {
            un = a - (10 * a) / 100;
            printf("10-per University Discount  =%f\n", un);
        }
    }

    return 0;
}