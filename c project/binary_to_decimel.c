#include <stdio.h>
#include <math.h>

/*
void binary(int n); //decalration
int main()
{
    int n;
    printf("Enter the  binary number \n");
    scanf("%d", &n);

    binary(n); //calling

    return 0;
}

void binary(int n) //defination
{

    int b = 2, p, i = 0, r;
    int s = 0;
    while (n != 0)
    {
        int u;
        u = n % 10;

        for (p = 0; p <= i; p++)
        {

            r = pow(b, p);
        }

        s = s + r * u;

        i = i + 1;
        n = n / 10;
    }
    printf("%d\n", s);
}
*/
int binary(int n)
{
    int r, p, b = 2, s = 0, i = 0;

    while (n != 0)
    {
        int u;
        u = n % 10;

        for (p = 0; p <= i; p++)
        {

            r = pow(b, p);
        }

        s = s + r * u;

        i = i + 1;
        n = n / 10;
    }
    // printf("%d\n", s);
    return s;
}
int main()
{
    int n;

    printf("Enter the number \n");
    scanf("%d", &n);

    int z;
    z = binary(n);
    printf("deciaml number=%d\n", z);
}