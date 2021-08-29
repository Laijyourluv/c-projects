#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char a[] = "Abcdefg"; // 1st string

    char b[] = "abcd"; // 2 nd string
    char c[] = "abcd"; //3 rd string
    // strcmp working

    //  string[1]=abcd;
    //  string[2]=Abcd;
    // strcmp=+1;
    //strcmp function compare each and every number of both string on basis of ascii value . e.g A=ascii value 65 and a= ascii valuer is 97  (a>A) then it gives +1

    //  if  string[2]=Abcd;
    // string[1]=abcd;
    // strcmp=-1;

    //  if string[1]=abcd;
    // string[2]=abcd;
    // strcmp= 0;

    int r, s, l;
    r = strcmp(a, b);
    s = strcmp(b, c);
    l = strcmp(c, a);
    printf("strcmp(a,b)=%d\n", r);

    printf("strcmp(b,c)=%d\n", s);

    printf("strcmp(c,a)=%d\n", l);
}