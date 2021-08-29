#include <stdio.h>
int main()
{
    int d;
    float c;
    printf("Enter the Days\n");
    scanf("%d", &d);

    if (d <= 5)
    {
        c = d*.50;

        printf("Late Charge for 5 days= %.2f rupees\n", c);
    }

    else if (d <= 10)
    {
        c = (d - 5) * 1 + 2.5;
        printf("Late Charge for 6-10 days=%.2f rupees\n", c);
    }
    else if (d <= 30)
    {
        c = (d - 10) * 5 + 2.5 + 5;
        printf("Late Charge above 10 days=%.2f rupees\n", c);
    }

    else
    {
        printf("Your membership be cancell");
    }

    return 0;
}