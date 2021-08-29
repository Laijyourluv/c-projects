#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number \n");
    scanf("%d", &n);
    if (n % 5 == 0)
    {
        if (n % 11 == 0)
        {
            printf("Number devisble by 5 and 11\n");
        }
        else
        {
            printf("Number devisble by 5 not by 11\n");
        }
    }
    else if (n % 11 == 0)
    {
        printf("Number  devisble by 11 not by 5\n");
    }

    else
    {
        printf("Number NOT devisble by 5 and 11\n");
    }

    return 0;
}