#include <stdio.h>
void main()

// here int 2 mult with size of int ; address(size) + 2*4 (byte size depend on bit-wise operator) 32 bit opertor =4, 64bit-oprator=8byte;
{
    int n = 4;
    int *p, *q;

    p = &n;
    q = &n;
    printf("Value of p=%d\n", *p);
    printf("Address of p=%u\n", p);
    p = p + 2;                        // here we add 2 in address of p addres(size)+ 2*4
    printf("\n Garbage Value is : =%d\n", *p); //garbage value
    printf("Address of p  =%u\n", p);// incrz by 8 byte
    printf("\n\n");

    *q = *q + 3; //here we add  3 in q value not in address of q
    printf(" addreses of q after addition =%u\n", q);
    printf("Value of q=%d\n", *q);
}