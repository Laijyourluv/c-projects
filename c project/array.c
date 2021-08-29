#include <stdio.h>
int main()
{
    int a[5];
    float b[5] = {5.1, 5.2, 5.3, 5.4, 5.5};

    //a = index/ scripting that start with zero   //   [size ]
    //  it gives continuous memory location to elemements  a[5]= block adrress = [102][104][106]
    printf("Enter the element \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("array element %d and addresses =%u\n", a[i], &a[i]);
    }

    // float

    printf("float Array elementys are \n");
    for (int i = 0; i < 5; i++)
    {
        printf("array element %f and addresses =%u\n", b[i], &b[i]);
    }

    return 0;
}