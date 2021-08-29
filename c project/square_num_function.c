#include <stdio.h>
/*  with argument 
void squ(int n)
{
    int k;
    k = n * n;

    printf("K=%d\n", k);
}

int main()
{
    int n;

    printf("Enter the number \n");
    scanf("%d", &n);

    squ(n);
}
*/
// with argument or with return type

int squ(int n)
{

    int k;
    k = n * n;

    return k;
}

#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number\n");
    scanf("%d", &n);

    int s;

    s = squ(n); //call by value
    printf("K=%d\n", s);
    return 0;
}
