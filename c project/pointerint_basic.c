#include <stdio.h>
int main()
{
    int n = 5;

    int *p = &n;

    // p = &n;

    int **k;
    k = &p;

    printf("Value of n=%d\n", n);
    printf("Value of n=%d\n", *p);
    printf("Value of n=%d\n", **k);
    printf("Value of n=%d\n", *(&n));
    printf("Value of n=%d\n", *(*(&p)));
    printf("Value of n=%d\n", *(*(*(&k))));

    printf("\n");
    printf(" Value of p=%d\n", p);
    printf(" Value of p=%d\n", *k);
    printf(" Value of p=%d\n", &n);
    printf("Value of p=%d\n", *(&p));
    printf("Value of p=%d\n", *(*(&k)));

    printf("\n");
    printf(" Value of k=%d\n", &p);
    printf(" value of k=%d\n", k);
    printf("Value of k=%d\n", *(&k));

    printf("\n");
    printf("Address of n=%d\n", &n);
    printf("Adress of n=%u\n", p);
    printf("\n");

    printf("Address of p=%u\n", &p);
    printf("Address of p=%d\n", k);
    printf("\n");

    printf("Addess of k =%d\n", &k);

    return 0;
}