#include <stdio.h>
// user define data type which by default it with 0
// we gives any value to it
enum week
{

    mon = 1,
    tue,
    wed,
    thu,
    fri,
    sat,
    sun
};
void main()
{

    printf("%d\n", mon);
    printf("%d\n", tue);
    printf("%d\n", wed);
    printf("%d\n", thu);
    printf("%d\n", fri);
    printf("%d\n", sat);
    printf("%d\n", sun);
}
