#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);
int main()
{
    int x = 3, y = 4;

    printf("Value of x=%d \t y=%d\n", x, y);
    wrong_swap(x, y); // call by value
    printf("Value After Swaping  x=%d \t y=%d\n", x, y);

    printf("\n\n");
    swap(&x, &y); // call by referance
    printf("Value After Swaping  x=%d \t y=%d\n", x, y);

    return 0;
}
void wrong_swap(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
