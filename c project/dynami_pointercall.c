#include <stdio.h>
#include <stdlib.h>

int main()
{

    // int *p;
    float *p;

    int n, i;
    float z;
    int x;
    char y;
    printf("Size of float %d \t int =%d \t char %d\n", sizeof(z), sizeof(x), sizeof(y));

    printf("Enter the size for Dynamic Memory Allocation\n");
    scanf("%d", &n);
    // p = (int *)malloc(n * sizeof(int));

    // for (i = 0; i < n; i++)
    // {
    //     printf("Enter the value of %d \n", i);
    //     scanf("%d", &p[i]);
    // }

    // for (i = 0; i < n; i++)
    // {
    //     printf(" Addreess =%d \t Size =%d\n ", &p[i], sizeof(p[i]));
    //     printf("p=%d\n", p[i]);
    //     printf("\n");
    // }

    p = (float *)malloc(n * sizeof(float));

    for (i = 0; i < n; i++)
    {
        scanf("%f", &p[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("Address =%d \t size=%d \t value=%f\n", &p[i], sizeof(p[i]), p[i]);
    }

    // char s[3];
    // char *p;

    // for (i = 0; i < 3; i++)
    // {
    //     p[i] = (char *)malloc(n * sizeof(char));
    //     printf("Enter the characters\n");
    //     gets(p[i]);
    // }

    // for (i = 0; i < n; i++)
    // {
    //     puts(p[i]);
    //     //printf("\tAddress =%d \t size=%d \t %s\n", &p[i], sizeof(p[i]), p[i]);
    // }
}
