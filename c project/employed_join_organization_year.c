#include <stdio.h>
int main()
{
    int n, m, s;

    printf("enter the current year \n");
    scanf("%d", &n);

    printf("enter the year in which employed join organization\n");
    scanf("%d", &m);

    s = n - m;

    if (s > 3)
        
        {
            printf("you get a bonus of 2500\n");
        }

    else
    {
        printf("Nothing");
    }
    return 0;
}