#include <stdio.h>
#include <conio.h>
int main()
{
    int h, m, s;
    printf("Enter the time in format  h : m : s\n");
    scanf("%d %d %d", &h, &m, &s);

start:;
    for (h; h < 24; h++)
    {
        for (int m; m <= 60; m++)
        {
            for (int s; s <= 60; s++)
            {

                printf("\n\n\n %d:%d:%d", h, m, s);
                if (h < 12)
                {
                    printf("am");
                }
                else
                {
                    printf("pm ");
                }
                for (double i = 1; i < 4900000; i++)
                {
                }
                // i++;
            }
            s = 0;
        }
        m = 0;
    }
    h = 0;
    goto start;

    return 0;
}