#include <stdio.h>
int main()
{
    int h, m, s,T;

    printf("Enter the value of Hour , Minute and Second\n");
    scanf("%d %d %d", &h, &m, &s);
T=h*3600+m*60+1*s;

printf("Total secon=%d",T);

    return 0;
}