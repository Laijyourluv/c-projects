#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    printf("value of a[0]=%d\n", arr[0]);
    printf("value of a[0]=%d\n", *(arr + 0));
    printf("Addres of a[0]=%d\n", &arr[0]);
    printf("adress of a[0]=%d\n", arr + 0);
    printf("\n\n");
    printf("value of a[1]=%d\n", arr[1]);     // arr[i]
    printf("value of a[0]=%d\n", *(arr + 1)); // *(arr+i)
    printf("address of a[1]=%d\n", arr + 1);  // arr+i
    printf("addres of a[1]=%d\n", &arr[1]);   //&arr[i]

    // arr++ or arr--     show error it constant
    int *ptr;
    ptr = arr;
    ptr++;
    ptr--;

    printf("\n\n");

    /*
    char arr[5] = {'a', 'b', 'c', 'd', '\0'};

    printf("value of a[0]=%c\n", arr[0]);     // arr[i]
    printf("value of a[0]=%c\n", *(arr + 0)); // *(arr+i)  both same
    printf("value of a[1]=%c\n", *(&arr[0]));
    printf("Addres of a[0]=%d\n", &arr[0]);
    printf("adress of a[0]=%d\n", arr + 0);
    printf("\n\n");
    printf("value of a[1]=%c\n", arr[1]);
    printf("value of a[1]=%c\n", *(&arr[1]));
    printf("value of a[0]=%c\n", *(arr + 1));
    printf("address of a[1]=%d\n", arr + 1); // arr+i
    printf("addres of a[1]=%d\n", &arr[1]);  //&arr[i] both same

*/
    return 0;
}