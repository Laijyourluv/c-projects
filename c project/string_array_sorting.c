#include <stdio.h>
#include <string.h>
void main()
{
    int i, j, N;
    char te[10];
    char n[10][10];

    printf("Enter the Limit\n");
    scanf("%d", &N);

    printf("Enter the Characters\n");
    for (i = 0; i < N; i++)
    {

        scanf("%s", &n[i]);
    }

    for (i = 0; i < N; i++)
    {

        for (j = i + 1; j < N; j++)
        {

            if (strcmp(n[i], n[j]) > 0)
            {
                strcpy(te, n[i]);
                strcpy(n[i], n[j]);
                strcpy(n[j], te);
            }
        }
        printf("%s\n", n[i]);
    }
}
