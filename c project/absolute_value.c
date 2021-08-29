#include <stdio.h>

int main()
{
    //  absolut value means change --value to ++ value
    int n, p;

    printf("enter the Any value \n");
    scanf("%d", &n);

    if (n < 0)
    {

        p = n * -1;

        printf("Absolute value =%d\n", p);
    }

    else
    {
        printf("Your absolute value=%d", n);
    }
    return 0;
}