#include <stdio.h>
typedef int i;
typedef char c[10];
typedef float f;

i a;     // here by using typedef int change into i
c b[10]; // char chnge to c
f p;     // float chnge to f

void main()
{
    printf("Enter the Number \n");
    scanf("%d", &a);
    printf("Enter the Name \n");
    scanf("%s", b);
    printf("Enter the Percentage \n");
    scanf("%f", &p);
    printf("\n\n");
    printf("%d\n", a);
    printf("\n\n");
    printf("%f\n", p);
    printf("\n\n");
    puts(b);
}