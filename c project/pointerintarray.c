#include <stdio.h>

const int max = 5; // global declaration  -> value of constant variable can't be changed while excution

int main()
{
    int a[max], i;
    for (i = 0; i < max; i++)
    {
        scanf("%d", &a[i]);
    }

    int *ptr[max];
    for (i = 0; i < max; i++)
    {
        ptr[i] = &a[i]; //assign addrees of array elements in pointer array
    }

    printf("print\n");
    for (i = 0; i < max; i++)
    {
        printf("%d\n", *ptr[i]);
    }

    return 0;
}