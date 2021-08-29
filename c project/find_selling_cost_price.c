#include <stdio.h>
int main()
{

    int pl, sp, cp;

    printf("Enter the profit or Loss\n ");
    scanf("%d", &pl);

    printf("Enter the cost price\n");
    scanf("%d", &cp);

    sp = cp + pl;

    printf("selling price=%d", sp);

    return 0;
}