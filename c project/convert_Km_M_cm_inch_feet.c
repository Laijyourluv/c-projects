#include <stdio.h>
int main()
{

    int km;
    int m, cm, inch, feet;

    printf("enter the value of km\n");
    scanf("%d", &km);

    m = 1000 * km;
    cm = m * 100;
    inch = cm / 2.54;
    feet = inch / 12;

    printf("m=%d\n", m);
    printf("cm=%d\n", cm);
printf("inch=%d\n",inch);

printf("feet=%d\n",feet);

    return 0;
}