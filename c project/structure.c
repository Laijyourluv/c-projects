#include <stdio.h>

struct data
{
    int m, n, o, p, q;
    int a, b, c, d, e;

    char A[10], B[10], C[10], D[10], E[10];

    double P;
};
void main()
{
    struct data s;

    printf("size of structure data type is %d \n", sizeof(s));
    printf("Enter the name of 5 students\n");
    scanf("%s", s.A);
    scanf("%s", s.B);
    scanf("%s", s.C);
    scanf("%s", s.D);
    scanf("%s", s.E);

    printf("enter the roll no. of students\n");
    scanf("%d", &s.m);
    printf("enter the roll no. of students\n");
    scanf("%d", &s.n);
    printf("enter the roll no. of students\n");
    scanf("%d", &s.o);
    printf("enter the roll no. of students\n");
    scanf("%d", &s.p);
    printf("enter the roll no. of students\n");
    scanf("%d", &s.q);

    printf("enter the marks of students\n");
    scanf("%d", &s.a);
    printf("enter the marks of students\n");
    scanf("%d", &s.b);
    printf("enter the marks of students\n");
    scanf("%d", &s.c);
    printf("enter the marks of students\n");
    scanf("%d", &s.d);
    printf("enter the marks of students\n");
    scanf("%d", &s.e);

    printf("\n Name \t Roll no. \t Marks\n");
    printf("\n %s \t %d \t\t %d\n", s.A, s.m, s.a);
    printf("\n %s \t %d \t\t %d\n", s.B, s.n, s.b);
    printf("\n %s \t %d \t\t %d\n", s.C, s.o, s.c);
    printf("\n %s \t %d \t\t %d\n", s.D, s.p, s.d);
    printf("\n %s \t %d \t\t %d\n", s.E, s.q, s.e);
}
