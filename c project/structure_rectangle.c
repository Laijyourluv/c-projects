#include <stdio.h>
#include <string.h>
union rect
{

    float l, b;
};
void main()
{
    union rect s;
    printf("Size of structure %d\n", sizeof(s));
    float r, p;
    printf("enter the length\n");
    scanf("%f", &s.l);

    printf("Enter the breadth\n");
    scanf("%f", &s.b);
    int o;

    printf("Press 1.. for Area of rectangle\n");
    printf("press 2.. for Perimeter of rectangle\n");
    scanf("%d", &o);
    switch (o)
    {

    case 1:
        r = s.l * s.b;
        printf("Area of rectangle= %f\n", r);
        break;
    case 2:
        p = s.l + s.b;
        printf("perimeter of rectangle =%f\n", p);
    default:
        break;
    }
}
