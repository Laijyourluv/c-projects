#include <stdio.h>
int main()
{
    // subtraction in address 
    int n = 10, m = 15;
    int x;
    int *p, *q;
    p = &n;
    q = &m;
    printf("value of p=%d\n", *p);  // garbage value
    printf("Adress %u\n", p);
    printf("\n");
    printf("value of q=%d\n", *q); // garbage value
    printf("Initial Adreess %u\n", q);
   
    q = q + 5;   // incerease  adreess not  value of q
    printf("\n");
    printf("Incrz value of q=%d\n", *q);  //garbage value
    printf("Incrz Adreess %u\n", q);

    x = q - p; // difference of address
  
    printf("x=%d\n", x);

    printf("address of x=%u\n", x);

    return 0;
}