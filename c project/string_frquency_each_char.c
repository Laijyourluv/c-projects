
#include <stdio.h>
#include <string.h>

void luv(char a[])
{
    int i, j, k = 0, l = 0;
    int l1 = 0, l2 = 0, l3 = 0, l4 = 0, l5 = 0, l6 = 0, l7 = 0, l8 = 0, l9 = 0, l01 = 0, l02 = 0, l03 = 0, l04 = 0, l05 = 0, l06 = 0, l07 = 0, l08 = 0, l09 = 0, l10 = 0;
    int la = 0, lb = 0, lc = 0, ld = 0, le = 0, lf = 0;

    for (i = 0; a[i] != NULL; i++)
    {

        if (a[i] == 65 || a[i] == 97)
        {
            k = k + 1;
        }
        if (a[i] == 66 || a[i] == 98)
        {
            l1++;
        }
        if (a[i] == 67 || a[i] == 99)
        {
            l2++;
        }
        if (a[i] == 68 || a[i] == 100)
        {
            l3++;
        }
        if (a[i] == 69 || a[i] == 101)
        {
            l4++;
        }
        if (a[i] == 70 || a[i] == 102)
        {
            l5++;
        }
        if (a[i] == 71 || a[i] == 103)
        {
            l6++;
        }
        if (a[i] == 72 || a[i] == 104)
        {
            l7++;
        }
        if (a[i] == 73 || a[i] == 105)
        {
            l8++;
        }
        if (a[i] == 74 || a[i] == 106)
        {
            l9++;
        }
        if (a[i] == 75 || a[i] == 107)
        {
            l10++;
        }
        if (a[i] == 76 || a[i] == 108)
        {
            l01++;
        }
        if (a[i] == 77 || a[i] == 109)
        {
            l02++;
        }
        if (a[i] == 78 || a[i] == 110)
        {
            l03++;
        }
        if (a[i] == 79 || a[i] == 111)
        {
            l04++;
        }
        if (a[i] == 80 || a[i] == 112)
        {
            l05++;
        }
        if (a[i] == 81 || a[i] == 113)
        {
            l06++;
        }
        if (a[i] == 82 || a[i] == 114)
        {
            l07++;
        }
        if (a[i] == 83 || a[i] == 115)
        {
            l08++;
        }
        if (a[i] == 84 || a[i] == 116)
        {
            l09++;
        }
        if (a[i] == 85 || a[i] == 117)
        {
            la++;
        }
        if (a[i] == 86 || a[i] == 118)
        {
            lb++;
        }
        if (a[i] == 87 || a[i] == 119)
        {
            lc++;
        }
        if (a[i] == 88 || a[i] == 120)
        {
            ld++;
        }
        if (a[i] == 89 || a[i] == 121)
        {
            le++;
        }
        if (a[i] == 90 || a[i] == 122)
        {
            lf++;
        }
    }
    printf("A/a frequency %d\n", k);
    printf("B/b frequency %d\n", l1);
    printf("C/c frequency %d\n", l2);
    printf("D/d frequency %d\n", l3);
    printf("E/e frequency %d\n", l4);
    printf("F/f frequency %d\n", l5);
    printf(" G/g frequency %d\n", l6);
    printf("H/h frequency %d\n", l7);
    printf("I/i frequency %d\n", l8);
    printf("J/j frequency %d\n", l9);
    printf("K/k frequency %d\n", l10);
    printf("L/l frequency %d\n", l01);
    printf("M/m frequency %d\n", l02);
    printf("N/n frequency %d\n", l03);
    printf("O/o frequency %d\n", l04);
    printf("P/p frequency %d\n", l05);
    printf("Q/q frequency %d\n", l06);
    printf("R/r frequency %d\n", l07);
    printf("S/s frequency %d\n", l08);
    printf("T/t frequency %d\n", l09);
    printf("U/u frequency %d\n", la);
    printf("V/v frequency %d\n", lb);
    printf("W/w frequency %d\n", lc);
    printf("X/x frequency %d\n", ld);
    printf("Y/y frequency %d\n", le);
    printf("Z/z frequency %d\n", lf);
}

void main()
{
    char a[100];
    gets(a);

    // char b;
    // scanf("%c", &b);

    // b = getche();

    luv(a);
}
