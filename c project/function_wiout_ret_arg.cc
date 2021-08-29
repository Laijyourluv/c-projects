

#include <stdio.h>

void hello(); //declaration
void main()

{
    hello();
    hello();
    hello();
    hello(); // calling  many times
}

void hello() //definition
{

    printf("Hello\n");
}