#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct manufacture
{
    char se[10], mat[10];
    int s, q, ma;
};
void main()
{
    struct manufacture m[100];
    int o, i = 0, c, j, p = 0;
    char ce[4];
    while (1)
    {

        printf("Press  : 1 -For Store Information\n");

        printf("Press  : 2-Display Information By Serial Number \n");
        scanf("%d", &o);
        switch (o)
        {
        case 1:
            printf("Enter the Serial Numnber Of Engine\n");
            scanf("%s%d", &m[i].se, &m[i].s);
            printf("Enter the Manufactured Year\n");
            scanf("%d", &m[i].ma);
            printf("Enter the Material\n");
            scanf("%s", &m[i].mat);
            printf("Enter the Quantity\n");
            scanf("%d", &m[i].q);
            i++;
            break;
        case 2:
            printf("Enter the Serial Number \n");
            scanf("%s%d", &ce, &c);
            for (j = 0; j < i; j++)
            {

                if (strcmp(ce, m[j].se) == 0)
                {
                    if (c == m[j].s)
                    {

                        printf("Serial Number      : %s%d\n", m[j].se, m[j].s);
                        printf("Manufactured Year  : %d \n", m[j].ma);
                        printf("Material           : %s\n", m[j].mat);
                        printf("Quantity           : %d\n", m[j].q);
                        p = 1;
                    }
                }
            }
            if (p == 0)
            {
                printf("You Enter Invalid Serial Number\n");
            }
            break;
        case 3:
            exit(0);
        }
    }
}
