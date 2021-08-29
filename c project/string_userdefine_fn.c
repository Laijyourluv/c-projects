#include <stdio.h>
#include <string.h>

void cmp_luv(char a[], char b[]);
void concat_luv(char a[], char b[]);
void upr_luv(char a[]);
void lwr_luv(char a[]);
void str_cpy_luv(char a[], char b[]);
int str_rev_luv(char a[]);
int len_luv(char a[]);
void main()
{
    int i, q;
    int l, m;
    char a[100], b[100];
    printf("enter the strings\n");
    gets(a);
    gets(b);
    printf("press\n 1. for length\n 2.for lowerscase\n  3.copy \n 4. for uppercase\n 5.for concate\n 6.compare \n 7. reverse\n ");
    scanf("%d", &q);

    switch (q)
    {
    case 1:
        l = len_luv(a);
        printf("%d\n", l);
        break;
    case 2:
        lwr_luv(a);
        break;

    case 3:
        str_cpy_luv(a, b);
        break;

    case 4:

        upr_luv(a);
        break;
    case 5:
        concat_luv(a, b);
        break;
    case 6:
        cmp_luv(a, b);
        break;
    case 7:

        m = str_rev_luv(a);
        for (i = m; i >= 0; i--)
        {
            printf("%c", a[i]);
        }
        printf("\n");
        break;
    }
}
int len_luv(char a[])
{
    int i, l = 0;

    for (i = 0; a[i] != NULL; i++)
    {
        l = l + 1;
    }
    return l;
}

int str_rev_luv(char a[])
{
    int i;
    int m;

    for (i = 0; a[i] != '\0'; i++)
    {
        m = m + 1;
    }
    return m;
}

void str_cpy_luv(char a[], char b[])
{

    int i;

    for (i = 0; a[i] != NULL; i++)
    {
        b[i] = a[i];
    }

    printf("\n\n");
    for (i = 0; a[i] != NULL; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");
}

void lwr_luv(char a[])
{
    int i;
    for (i = 0; a[i] != NULL; i++)
    {
        printf("%c", a[i] + 32);
    }
    printf("\n");
}

void upr_luv(char a[])
{

    int i;

    for (i = 0; a[i] != NULL; i++)
    {
        printf("%c", a[i] - 32);
    }
    printf("\n");
}

void concat_luv(char a[], char b[])
{
    int i;
    for (i = 0; a[i] != NULL; i++)
    {
        printf("%c", a[i]);
    }
    for (i = 0; a[i] != NULL; i++)
    {
        printf("%c", b[i]);
    }
    printf("\n");
}

void cmp_luv(char a[], char b[])
{
    int z = 0, o = 0;
    int i, j;
    for (i = 0; a[i] != NULL; i++)
    {
        z = z + 1;
    }
    for (j = 0; b[j] != NULL; j++)
    {
        o = o + 1;
    }

    for (i = 0, j = 0; a[i] != NULL || b[j] != NULL; i++, j++)
    {
        if (a[i] == b[j])
        {
            while (i == z - 1 && j == o - 1)
            {

                printf("a==b\t");
                printf("0");
                printf("\n");
                break;
            }
        }

        if (a[i] != b[j])
        {
            if (a[i] > b[j])
            {
                printf("a>>b\t 1");
                printf("\n");
                break;
            }

            else
            {
                printf("b>>a\t-1");
                printf("\n");
                break;
            }
        }
    }
}
