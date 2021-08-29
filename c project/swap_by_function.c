#include <stdio.h>
/* with argument without retur n type


void swap(int x, int y); //declaration
void main()
{
    int x, y;

    printf("Enter the value of x and y\n");
    scanf("%d %d", &x, &y);

    swap(x, y); //call of value
}

void swap(int x, int y) //defination
{
    int z;
    z = x;

    x = y;

    y = z;

    printf("x=%d and y=%d\n", x, y);
}*/

int swap(int a, int b)
{
    int x = a, y = b;

    int z;
    z = x;

    x = y;

    y = z;

    // printf(" x=%d and y= %d", x, y);
    return x, y;
}

int main()
{
    int x, y;

    printf("Enter the value of  x and y\n");
    scanf("%d %d", &x, &y);

    int u, s;

    u = swap(x, y); //call of value

    // int s;

    printf("Value of x=%d and y=%d", u, u);
    return 0;
}