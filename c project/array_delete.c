#include <Stdio.h>
int main()
{
    int a[100];
    int i, n;

    printf("Enter the array size\n");
    scanf("%d", &n);

    printf("enter the elements of array\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d]\n", i);
        scanf("%d", &a[i]);
    }

    int p;
    printf("Enter the position\n");
    scanf("%d", &p);

    int in;
    // printf("Enter the insert value \n");
    // scanf("%d", &in);

    printf("\n");

    // n++;   //size increase

    // working

    for (i = p - 1; i < n; i++)
    {
        a[i] = a[i + 1];
    }

    // a[p - 1] = in;

    for (i = 0; i < n; i++)
    {

        printf("%d\n", a[i]);
    }
    return 0;
}
