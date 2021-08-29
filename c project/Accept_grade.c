#include <stdio.h>
int main()
{
    int g;

    printf("Enter the grade press \n 1. E \n 2. V \n 3. G \n 4. A \n 5. F\n");
    scanf("%d", &g);

    if (g == 1)
    {
        printf("E=Excellent\n");
    }

    if (g == 2)
    {
        printf("V=Very Good\n");
    }

    if (g == 3)
    {
        printf("G=Good\n");
    }

    if (g == 4)
    {
        printf("A=Average\n");
    }

    if (g == 5)
    {
        printf("F=Fail\n");
    }

    return 0;
}