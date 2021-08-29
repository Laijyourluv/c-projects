#include <stdio.h>
int main()
{
    // basic salry and gross salary
    int bs, gs;
    //  domestic allowance and house rent
    int ds, hs;

    printf("enter Amount of basic salry\n");
    scanf("%d", &bs);

    ds = (40 * bs) / 100;

    hs = (20 * bs) / 100;

    printf("domestic allowance=%d\n", ds);
    printf("house rent=%d\n", hs);

    printf("gross salary %d+%d=%d ", ds,hs,ds+hs);
    return 0;
}