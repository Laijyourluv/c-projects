#include <stdio.h>
int main()
{
    int n,i=1,j=0;

    printf("Enter the numbr\n");
    scanf("%d", &n);

    while(i<=n)
    {

    j=i*i;
    printf("n =%d\n",j);

    i=i+1;
    }

    return 0;
}