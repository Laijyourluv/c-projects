#include <stdio.h>

int main()
{

    int a, b, c, d, e, g, h, i, j, k, per, perb;

    printf("Enter the Marks of Main subject subject\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    printf("Enter the Marks of Subsidary subject subject\n");
    scanf("%d %d %d %d %d", &g, &h, &i, &j, &k);

    per = (a + b + c + d + e) * 100 / 500;

    perb = (g + h + i + j + k) * 100 / 500;

    if (per >= 55 && perb >= 45)
    {
        printf("Passed\n");
    }

    else if (per >= 45 && per < 55 && perb >= 55)
    {
        printf("Passed\n");
    }

    else if (perb < 45 && per >= 65)
    {
        printf("Allowed to reappear\n");
    }

    else
    {
        printf("Faiilledd");
    }
    return 0;
}
