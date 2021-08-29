#include <stdio.h>
int main()
{

    int sp, cp, p, l;

    printf("enter the selling price and cost price\n");
    scanf("%d %d", &sp, &cp);

    p = sp - cp;
    l = cp - sp;

    if (sp > cp)
    {
        printf("Profit %d+%d=%d", p);
        }

    else
    {
        printf("loss=%d", l);
    }
    return 0;
}