#include <stdio.h>
int main()
{

    int a, ms, g;

    printf("Enter the maritial status \n 1. married \n 2. unmarried\n");
    scanf("%d", &ms);

    printf("Enter the GENDER 1. male \n 2.female\n");
    scanf("%d", &g);

    printf("Enter the Age \n");
    scanf("%d", &a);

    //    condn ? true :false ;

    ms == 1 ? printf(" Driver Insured\n") :

    g == 1 ? a > 30 ? printf("Driver Insured\n") :

                    printf("Driver Not Insured\n")
    :

    a > 25 ? printf("Driver Insured\n")
           : printf("Driver Not Insured\n");

    return 0;
}