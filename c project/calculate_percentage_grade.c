#include <stdio.h>
int main()
{

    int p, per, m, b, c, ch;

    printf("enter marks of physics\n");
    scanf("%d", &p);

    printf("enter marks of math\n");
    scanf("%d", &m);

    printf("enter the marks of Biology\n");
    scanf("%d", &b);

    printf("enter the marks of computer \n");
    scanf("%d", &c);

    printf("enter the marks of chemistry\n");
    scanf("%d", &ch);

    per = (p + m + b + c + ch) * 100 / 500;

    if (per >= 90)
    {
        printf("A - Grade\n");
    }
    else if (per >= 80)
    {
        printf("B-Grade\n");
    }

    else if (per >= 70)
    {
        printf("C- Grade\n\n");
    }

    else if (per >= 60)
    {
        printf("D-Grade\n\n");
    }

    else if (per >= 40)
    {
        printf("E-Grade\n\n");
    }

    else if (per <= 40)
    {
        printf("F-Grade\n\n");
    }

    return 0;
}