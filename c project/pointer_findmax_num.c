#include<stdio.h>
#include<string.h>
int main ()
{
    char str[10];
    char *ptr;
    printf ("enter a character:\n");
    gets (str);
    puts (str);
    ptr = str;
    printf ("name = %s", ptr);
}