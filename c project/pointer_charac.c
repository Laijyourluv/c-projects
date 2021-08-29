#include <stdio.h>
void main()
{

    char x[10] = "luv";
    char *z;
    z = x;

    printf("Address of %c is %u\n", *z, z);
    printf("addree z=%d\n", x);
    printf("%s\n", z);
    printf("\n\n");

    char a = 's';
    char *b;
    b = &a;

    char **c;
    c = &b;

    printf("a=%c\n", a);
    printf("a=%c\n", *b);
    printf("a=%c\n", **c);
    printf("a=%c\n", *(*(&b)));
    printf("a=%c\n", *(*(*(&c))));
    printf("Address =%d\n", &a);
    printf("Addres a=%u\n", b);

    printf("\n\n");
    printf("Adres of b=%u\n", b);
    printf("B=%c\n", b);
    printf("b=%c\n", *c);

    printf("\n\n");
    printf("Addres of c=%d\n", &c);
    printf("Value of c=%c\n", c); //garbaze value
}