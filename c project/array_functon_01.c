// sum

#include <stdio.h>
int sum(int a[]);
int main()

{
    int a[10];
    int i;
    printf("Enter the array elements \n");
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
    }
    int p;

    p = sum(a); // calling

    printf("sum=%d\n", p);
}

int sum(int a[])
{

    int i, s = 0;

    for (i = 0; i < 4; i++)
    {
        s = s + a[i];
    }

    return s;
}