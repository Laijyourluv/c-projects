#include <stdio.h>
int main()
{
    int a[10]; //= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    printf("Enter the array elements\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    int sum = 0;

    for (i = 0; i < 5; i++)
    {

        sum = sum + a[i];
    }
    printf("Sum=%d\n", sum);

    float avg;
    // for (int i = 0; i < 10; i++)
    // {

    avg = (float)sum / i;
    // }
    printf("Avg=%.2f\n", avg);
    return 0;
}