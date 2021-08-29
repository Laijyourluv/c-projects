#include <stdio.h>

void sum(int a[10][10], int b[10][10], int r, int c); // declaration
void sub(int a[10][10], int b[10][10], int r, int c); // declaration
void mul(int a[10][10], int b[10][10], int r, int c); // declaration
void div(int a[10][10], int b[10][10], int r, int c); // declaration

int main()
{
    int a[10][10], b[10][10];
    int i, j, r, c, s;
    printf("enter the row and column\n");
    scanf("%d %d", &r, &c);

    printf("Enter the array elements of matrix 1\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the array elements of matrix 2\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Enter 1.Add \n 2. Sub \n 3. Mul \n 4. Div \n");
    scanf("%d", &s);
    switch (s)
    {
    case 1:
        sub(a, b, r, c); // calling

        break;

    case 2:
        sum(a, b, r, c); // callling
        break;

    case 3:
        mul(a, b, r, c); // callling
        break;

    case 4:
        div(a, b, r, c); // calling
        break;
    default:
        break;
    }

    return 0;
}

void sum(int a[10][10], int b[10][10], int r, int c) // defination
{
    int sum[10][10];
    int i, j;

    printf("sum of two matrix\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf(" %d\t", sum[i][j]);
        }
        printf("\n");
    }
}

void sub(int a[10][10], int b[10][10], int r, int c) // defination
{
    int sub[10][10];
    int i, j;

    printf("sum of two matrix\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
            printf(" %d\t", sub[i][j]);
        }
        printf("\n");
    }
}

void mul(int a[10][10], int b[10][10], int r, int c) // defination
{
    int mul[10][10];
    int i, j;

    printf("sum of two matrix\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mul[i][j] = a[i][j] * b[i][j];
            printf(" %d\t", mul[i][j]);
        }
        printf("\n");
    }
}

void div(int a[10][10], int b[10][10], int r, int c) // defination
{
    int div[10][10];
    int i, j;

    printf("sum of two matrix\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            div[i][j] = a[i][j] / b[i][j];
            printf(" %d\t", div[i][j]);
        }
        printf("\n");
    }
}
