#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define maxAffirm 100
#define maxLen 100

void removeNewLine(char *affirm)
{
    affirm[strcspn(affirm, "\n")] = '\0';
}


int wordCount(char *str)
{
    int countWords = 0;
    int inWord = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!isspace((unsigned char)str[i]))
        {
            if (!inWord)
            {
                inWord = 1;
                countWords++;
            }
        }
        else
        {
            inWord = 0;
        }
    }

    return countWords;
}

void add(char affirm[][maxLen], int *count)
{
    printf("Enter new Affirmation :");
    fgets(affirm[*count], maxLen, stdin);
    removeNewLine(affirm[*count]);


    if (wordCount(affirm[*count]) > 7)
    {
        printf("Affirmation must be up to 7 words only\n");
        return;
    }

    (*count)++;
}

int search(char affirm[][maxLen], int count)
{

    char search[maxLen];
    int flagSearch = -1;
    printf("Enter Affirm to search/Update :");
    fgets(search, maxLen, stdin);
    removeNewLine(search);

    for (int i = 0; i < count; i++)
    {
        if (strstr(affirm[i], search) != NULL)
        {
            flagSearch = i;
            break;
        }
    }

    return flagSearch;
}

void update(char affirm[][maxLen], int count)
{

    int flagUpd = search(affirm, count);

    if (flagUpd != -1)
    {
        printf("Enter new Affirmation :");
        fgets(affirm[flagUpd], maxLen, stdin);
        removeNewLine(affirm[flagUpd]); 

 
        if (wordCount(affirm[flagUpd]) > 7)
        {
            printf("Affirmation must be up to 7 words only\n");
            return; 
        }

        printf("UPDATED\n\n");
    }
    else
        printf("Not Found\n");
}

void del(char affirm[][maxLen], int *count)
{

    int flagSearch = search(affirm, *count);

    if (flagSearch != -1)
    {
        for (int i = flagSearch; i < *count - 1; i++)
        {
            strcpy(affirm[i], affirm[i + 1]);
        }
        (*count)--;
        printf("DELETED\n\n");
    }
    else
        printf("NOT FOUND\n");
}

int main()
{

    FILE *fptr;
    fptr = fopen("affirm.txt", "r");

    if (fptr == NULL)
    {
        fptr = fopen("affirm.txt", "w");
        fclose(fptr);
        fptr = fopen("affirm.txt", "r");
    }

    int count = 0;
    char affirm[maxAffirm][maxLen];

    while (fgets(affirm[count], maxLen, fptr) != NULL)
    {
        removeNewLine(affirm[count]);
        count++;
    }
    fclose(fptr);

    int choice;
    do
    {
        printf("1.Add new affirmation\n2.Delete\n3.Update\n4.Search\n5.Exit\nEnter Choice : ");
        scanf("%d", &choice);
        getchar();
        switch (choice)
        {
        case 1:

            add(affirm, &count);
            break;
        case 2:
            del(affirm,&count);
            break;
        case 3:
            update(affirm, count);
            break;
        case 4:
        {
            int idxSearch = search(affirm, count);
            if (idxSearch != -1)
            {
                printf("FOUND at index %d\n", idxSearch);
            }
            else
                printf("NOT FOUND\n");

            break;
        }
        case 5:
            printf("Save and exiting...\n");
            fptr=fopen("affirm.txt","w");
            for (int i = 0; i < count; i++)
            {
                fprintf(fptr,"%s\n",affirm[i]);
            }
            fclose(fptr);
                
            break;

        default:
            break;
        }

    } while (choice != 5);

    return 0;
}
