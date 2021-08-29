#include <stdio.h>
void main()
{
    int a, i, N;
    char n[10][10];
    printf("Enter the size of string array\n");
    scanf("%d", &N);
    printf("Enter the character\n");
    for (i = 0; i < N; i++)
    {

        scanf("%s", &n[i]);
    }
    printf("\n Names in Uppercase\n");
    for (i = 0; i < n; i++)
    {
        strupr(n[i]);
        printf("%s\n", n[i]);
    }
    printf("\n");
}