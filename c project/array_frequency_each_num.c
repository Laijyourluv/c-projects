#include <stdio.h>
int main()
{
    int a[10],b[10];

    int i, n, j = 0, k = 0, p = 0;
    printf("enter the number\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    // printf("Enter the searching element\n");
    // scanf("%d", &n);

    int c=0;
    for (i = 0; i < 5; i++)
    {
        c = 1;
        if (a[i]!= -1)
        {
            for (j = i + 1; j < 5; j++)
            {
                if (a[i] == a[j])
                {
                    // printf("%d", a[j]);
                    c = c + 1;
                    a[j] = -1;
                } // printf("indices postion of element=%d\n\n", i);
            }
            b[i] = c;
        }
    }
    for (i = 0; i < 5; i++)
    {

        if (a[i]!= -1)
        {
            printf("Occurence of %d number is %d\n", a[i], b[i]);
        }
    }
    return 0;
}