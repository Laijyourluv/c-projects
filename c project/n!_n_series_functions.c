#include <stdio.h>
/* with argument or without return type
void series(int n);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);

    series(n);
    // printf("factorail =%f\n", f);

    return 0;
}
void series(int n)
{

    int i = 1;
    int s = 0;
    int f = 1;
    for (i = 1; i <= n; i++)
    {

        f = f * i;

        s =  f / i;

        printf("Series=%d\n", s);
    }
    // printf("Series=%d\n", s);
}
*/
// with argument  or return type

int series(int i)
{

    int a = 1;
    int s = 0;
    int f = 1;
    for (a = 1; a <= i; a++)
    {

        f = f * a;

        s = f / a;
    }
    // printf("Series=%d\n", s);

    return s;
}
int main()
{
    int n, u;

    printf("Enter the number\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        u = series(i); //call value
        printf("Series=%d\n", u);
    }

    return 0;
}