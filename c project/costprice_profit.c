#include <stdio.h>
int main()
{
    // enter  selling price of 15 iems  and profit
    int sp, p;
    int c = 0;

    printf("enter the sp and profit \n");
    scanf("%d %d", &sp, &p);

    c = (sp - p) / 15;
    printf("Cost price/item=%d", c);
    return 0;
}