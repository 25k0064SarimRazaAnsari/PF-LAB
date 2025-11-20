#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_RECIPES 40
#define MAX_LEN 100

void remove_newline(char *str) {
    str[strcspn(str, "\n")] = '\0';
}

void to_lower(char *str) {
    for (int i = 0; str[i]; i++)
        str[i] = tolower(str[i]);
}


void search_recipe(char recipes[][MAX_LEN], int count) {
    char query[MAX_LEN];
    printf("Enter recipe name to search: ");
    fgets(query, MAX_LEN, stdin);
    remove_newline(query);

    char queryLower[MAX_LEN];
    strcpy(queryLower, query);
    to_lower(queryLower);

    int found = 0;

    printf("\n--- Search Results ---\n");
    for (int i = 0; i < count; i++) {
        char temp[MAX_LEN];
        strcpy(temp, recipes[i]);
        to_lower(temp);

        if (strstr(temp, queryLower) != NULL) {
            printf("%d. %s\n", i, recipes[i]);
            found = 1;
        }
    }

    if (!found)
        printf("No matching recipes found.\n");
}

void sort_recipes(char recipes[][MAX_LEN], int count) {
    char temp[MAX_LEN];

    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (strcmp(recipes[j], recipes[j + 1]) > 0) {
                strcpy(temp, recipes[j]);
                strcpy(recipes[j], recipes[j + 1]);
                strcpy(recipes[j + 1], temp);
            }
        }
    }
}

int main() {
    FILE *fp;

    char recipes[MAX_RECIPES][MAX_LEN];
    int count = 0;

    // Load existing recipes
    fp = fopen("recipes.txt", "r");
    if (fp == NULL) {
        fp = fopen("recipes.txt", "w");
        fclose(fp);
        fp = fopen("recipes.txt", "r");
    }

    while (fgets(recipes[count], MAX_LEN, fp) != NULL && count < MAX_RECIPES) {
        remove_newline(recipes[count]);
        count++;
    }
    fclose(fp);


    while (1) {
        printf("\n1. Add recipe\n");
        printf("2. Modify recipe\n");
        printf("3. Delete recipe\n");
        printf("4. Search recipes\n");
        printf("Your choice (-1 to exit): ");

        char choiceStr[10];
        fgets(choiceStr, 10, stdin);
        remove_newline(choiceStr);

        if (strcmp(choiceStr, "-1") == 0)
            break;

        int choice = atoi(choiceStr);

        switch (choice) {

        case 1: {
            if (count >= MAX_RECIPES) {
                printf("Recipe list full!\n");
                break;
            }

            printf("Enter new recipe name: ");
            fgets(recipes[count], MAX_LEN, stdin);
            remove_newline(recipes[count]);

            count++;
            printf("Recipe added.\n");
            break;
        }

        case 2: {
            printf("Enter recipe index to modify: ");
            int index;
            scanf("%d", &index);
            getchar();

            if (index < 0 || index >= count) {
                printf("Invalid index.\n");
                break;
            }

            printf("Enter new recipe name: ");
            fgets(recipes[index], MAX_LEN, stdin);
            remove_newline(recipes[index]);

            printf("Recipe updated.\n");
            break;
        }

        case 3: {
            printf("Enter recipe index to delete: ");
            int index;
            scanf("%d", &index);
            getchar();

            if (index < 0 || index >= count) {
                printf("Invalid index.\n");
                break;
            }

            for (int i = index; i < count - 1; i++)
                strcpy(recipes[i], recipes[i + 1]);

            count--;
            printf("Recipe deleted.\n");
            break;
        }

        case 4:
            search_recipe(recipes, count);
            break;

        default:
            printf("Invalid choice.\n");
        }
    }

 
    sort_recipes(recipes, count);

 
    fp = fopen("recipes.txt", "w");
    for (int i = 0; i < count; i++)
        fprintf(fp, "%s\n", recipes[i]);
    fclose(fp);

    printf("\nAll recipes saved. Goodbye!\n");
    return 0;
}
