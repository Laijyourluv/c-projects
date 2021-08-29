#include <stdio.h>

void same(int i)
{ //here adreses  are different but value same bcz  value of i pass not addres
    printf("value same\n ");
        printf("\nvalue of i=%d\n", i);
    printf("Addres of i=%u\n", &i);
}
void addsame(int *a)
{
    printf("Address same\n");
    printf("\nvalue of i=%d\n", *a);
    printf("Addres of i=%u\n", a);
}
int main()
{
    int i = 4;
    printf("value of i=%d\n", i);
    printf("Addres of i=%d\n", &i);
    same(i); // call by value 
    addsame(&i); //call by referance(addresses)

    return 0;
}
