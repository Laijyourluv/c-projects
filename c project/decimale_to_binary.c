// without argument or return type

/*

#include <stdio.h>

void decimal(int n)
{
    int r, i = 1, b = 0;

    for (int i = 1; n > 0; n = n / 2)
    {

        r = n % 2;

        b = b + r * i;

        // n = n / 2;
        i = i * 10;
    }
    printf("binary number=%d\n", b);
}

void main()
{

    int n;

    printf("Enter the number\n");
    scanf("%d", &n);

    decimal(n);
}
*/

//  with argument or return type
#include <stdio.h>
int deciaml(int n)
{
    int r, b = 0, f = 1;

    while (n != 0)
    {
        r = n % 2;

        b = b + r * f;

        f = f * 10;

        n = n / 2;
    }
    return b;
}

int main()
{
    int n;
    int c;
    printf("Enter the number\n");
    scanf("%d", &n);

    c = deciaml(n);

    printf("binary number=%d\n", c);

    return 0;
}
