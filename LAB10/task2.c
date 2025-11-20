#include <stdio.h>
#include <string.h>
#include <ctype.h>

void remove_newline(char *str) {
    str[strcspn(str, "\n")] = '\0';
}

int count_words(char *str) {
    int count = 0;
    int inWord = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i]) && inWord == 0) {
            inWord = 1;
            count++;
        } 
        else if (isspace(str[i])) {
            inWord = 0;
        }
    }
    return count;
}

int search(char level[][100], int row) {
    char searchStr[100];
    printf("Enter level to search: ");
    fgets(searchStr, 100, stdin);
    remove_newline(searchStr);

    for (int i = 0; i < row; i++) {
        char temp[100];
        strcpy(temp, level[i]);
        remove_newline(temp);

        if (strcmp(temp, searchStr) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    FILE *fptr;
    fptr = fopen("levels.txt", "r");

    if (fptr == NULL) {
        printf("Could not open levels.txt. Creating a new one.\n");
        fptr = fopen("levels.txt", "w");
        fclose(fptr);
        fptr = fopen("levels.txt", "r");
    }

    char level[50][100];
    int row = 0;

    while (fgets(level[row], sizeof(level[row]), fptr) != NULL) {
        remove_newline(level[row]);
        row++;
    }
    fclose(fptr);

    int choice;

    do {
        printf("\n1. Add\n2. Search\n3. Update\n4. Delete\n5. Exit & Save\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();  

        switch (choice) {

        case 1: {
            printf("------- ADD -------\n");
            printf("Enter new level: ");

            char newLevel[100];
            fgets(newLevel, 100, stdin);
            remove_newline(newLevel);

            if (count_words(newLevel) > 7) {
                printf("Error: Level cannot exceed 7 words!\n");
                break;
            }

            strcpy(level[row], newLevel);
            row++;

            printf("Level added successfully.\n");
            break;
        }

        case 2: {
            printf("------- SEARCH -------\n");
            int index = search(level, row);

            if (index == -1)
                printf("Level NOT found.\n");
            else
                printf("FOUND at position %d.\n", index);

            break;
        }

        case 3: {
            printf("------- UPDATE -------\n");

            int index = search(level, row);
            if (index == -1) {
                printf("Level NOT found.\n");
                break;
            }

            printf("Enter new updated level: ");
            char upd[100];
            fgets(upd, 100, stdin);
            remove_newline(upd);

            if (count_words(upd) > 7) {
                printf("Error: Level cannot exceed 7 words!\n");
                break;
            }

            strcpy(level[index], upd);
            printf("Level updated successfully.\n");
            break;
        }

        case 4: {
            printf("------- DELETE -------\n");

            int index = search(level, row);
            if (index == -1) {
                printf("Level NOT found.\n");
                break;
            }

            for (int i = index; i < row - 1; i++) {
                strcpy(level[i], level[i + 1]);
            }
            row--;

            printf("Level deleted successfully.\n");
            break;
        }

        case 5: {
            printf("Saving and exiting...\n");

            fptr = fopen("levels.txt", "w");
            if (fptr == NULL) {
                printf("Error saving file.\n");
                return -1;
            }

            for (int i = 0; i < row; i++) {
                fprintf(fptr, "%s\n", level[i]);
            }

            fclose(fptr);
            printf("Saved.\n");
            return 0;
        }

        default:
            printf("Invalid choice. Try again.\n");
        }

    } while (choice != 5);

    return 0;
}
