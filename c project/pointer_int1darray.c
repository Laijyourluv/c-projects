#include <stdio.h>

void main()
{
    int a[5], i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", a + i); // a+i point to ith element (adress)
    }

    for (i = 0; i < 5; i++)
    {
        printf("adres %d\n", a + i);
        printf("value =%d\n", *(a + i)); // point to 0th element of 1-d(value)
    }
}