#include <stdio.h>
int main(){
    int no, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &no);

    for (i = 1; i <= no; i++)
    {

        for (space = i; space < no; space++)
        {
            printf(" ");
        }

        for (j = 1; j <= (2 * i - 1); j++)
        {
            if (j == 1 || j == (2 * i - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    for (i = no - 1; i >= 1; i--)
    {

        for (space = no; space > i; space--)
        {
            printf(" ");
        }

        for (j = 1; j <= (2 * i - 1); j++)
        {
            if (j == 1 || j == (2 * i - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
