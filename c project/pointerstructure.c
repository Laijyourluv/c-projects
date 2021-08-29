#include <stdio.h>
struct detail
{
    char a[10];
    int b;
    float code;
    int tara;
};

void main()
{
    struct detail d;
    struct detail *p;
    p = &d;
    (*p).code = 101.12; //we also use this instead of p->code
    p->tara = 40;
    printf("%f\n", d.code);
    printf("%d\n",d.tara);
    int i;

    printf("Enter the name of student\n");
    scanf("%s", p->a);
    // gets(d[i].a);

    printf("Enter the marks of student\n");
    scanf("%d", &d.b);  // here we can't write p->b bcz pointer not able to access address of integer  

    printf("\nEnter  name of students\n");

    printf("%s\n", p->a);

    printf("marks %d\n", p--->b);
}
