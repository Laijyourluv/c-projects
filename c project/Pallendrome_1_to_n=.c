
#include <stdio.h>
int main()

{
    int n, s;
    int r, i = 1;

    printf("Enter the number to find pallendrome\n");
    scanf("%d", &n);

    while( i <= n)
    {
        s = i;
        int l = 0;
        while (s != 0)

        {

            r = s % 10;
            l = r + l * 10;
            s = s / 10;
        }

        if (l == i)
        {

            printf("Pallendrome=%d\n", l);
        }

        // else
        // {
        //     printf("Not Pallendrome=%d\n", l);
        // }
        i++;
    }
    return 0;
}
