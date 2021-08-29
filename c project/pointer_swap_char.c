#include <stdio.h>

void swap(char *a, char *b)
{
    char *t;
    t = a;
    a = b;
    b = t;
    printf("after swaping\n");
    printf("%s \n%s\n", a, b);
}

int main()
{
    char *x = "geeksquiz";
    char *y = "geeksforgeeks";
    printf("before swaping\n");
    printf("%s \n%s\n", x, y);
    printf("\n\n");
    swap(x, y);
}