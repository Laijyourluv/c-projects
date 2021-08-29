#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct book
{
    char nm[10], flag[10], title[10], bk[20];
    int ac, price;
};
void main()
{
    struct book s[100];
    struct book num;

    char name[10], t[10], red[3];
    int o, j = 0, i, p = 0, no, z = 0, k;
    while (2)
    {

        printf("Enter 1: to add book information\n");
        printf("Enter 2: to display book information\n");
        printf("Enter 3: List All books of Given Author\n");
        printf("Enter 4: List of Specified book title \n");
        printf("Enter 5: List the books in orders of accession Numbers\n");
        printf("Enter 6: Count All books\n");
        printf("Enter 7: Exist\n");

        scanf("%d", &o);
        switch (o)
        {
        case 1:
            printf("Enter the Name of Book\n");
            scanf("%s", &s[j].bk);
            printf("Enter the Author Name\n");
            scanf("%s", &s[j].nm);
            printf("Enter the title of book\n");
            scanf("%s", &s[j].title);
            printf("Enter the Accession Number\n");
            scanf("%d", &s[j].ac);
            printf("Enter the price of book\n");
            scanf("%d", &s[j].price);
            printf("Enter the Flag red (if issused) else (Blue)\n");
            scanf("%s", &s[j].flag);
            j++;
            break;
        case 2:
            for (i = 0; i < j; i++)
            {
                printf("Book   name       : %s\n", s[i].bk);
                printf("Author Name       : %s\n", s[i].nm);
                printf("Title of  book    : %s\n", s[i].title);
                printf("Accession of book : %d\n", s[i].ac);
                printf("Price Of  Book    : %d\n", s[i].price);
                // printf("Flag              : %s\n", s[i].flag);
            }
            break;
        case 3:
            printf("Enter the name of Author\n");
            scanf("%s", &name);

            for (i = 0; i < j; i++)
            {
                if (strcmp(name, s[i].nm) == 0)
                {
                    printf("%s\n", s[i].bk);
                    p = 1;
                }
            }
            if (p == 0)
            {
                printf("No Book \n");
            }
            break;
        case 4:
            printf("Enter The Title of Book\n");
            scanf("%s", &t);
            for (i = 0; i < j; i++)
            {
                if (strcmp(t, s[i].title) == 0)
                {

                    printf("Title Specified book    : %s\n", s[i].bk);
                    p = 1;
                }
            }
            if (p == 0)
            {
                printf("No Book \n");
            }
            break;

        case 5:

            for (i = 0; i < j; i++)
            {
                for (k = i + 1; k < j; k++)
                {
                    if (s[i].ac > s[k].ac)
                    {
                        num.ac = s[i].ac;
                        s[i].ac = s[k].ac;
                        s[k].ac = num.ac;

                        strcpy(num.bk, s[i].bk);
                        strcpy(s[i].bk, s[k].bk);
                        strcpy(s[k].bk, num.bk);
                    }
                }

                printf("Title of  book    : %s  : %d\n", s[i].bk, s[i].ac);
            }

            break;
        case 6:
            printf("All books in library : %d\n", j);

            for (i = 0; i < j; i++)
            {
                printf("Title of  book    : %s\n", s[i].bk);
            }

            break;
        case 7:
            exit(0);
        }
    }
}