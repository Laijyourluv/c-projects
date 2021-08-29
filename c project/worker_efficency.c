#include <stdio.h>
int main()
{
    int h;

    printf("Enter Hours \n");
    scanf("%d", &h);

    if (h >= 2 && h <= 3)
    {
        printf("Highly Efficient");
    }

    else if (h > 3 && h <= 4)
    {
        printf("Improve Speed\n");
    }

    else if (h > 4 && h <= 5)
    {

        printf("Need of Training\n");
    }

    else if (h > 5)
    {
        printf("Leave Company\n");
    }

    return 0;
}