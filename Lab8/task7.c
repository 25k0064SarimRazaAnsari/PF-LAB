#include <stdio.h>

#define section 2
#define shelf 3
#define item 4

int main() {

    int arr[section][shelf][item];
    int sectionTotal[section] = {0};
    int highestShelfTotal = 0, highestSection = 0, highestShelf = 0;

    for (int i = 0; i < section; i++) {
        printf("\nEnter quantities for Section %d\n", i + 1);
        for (int j = 0; j < shelf; j++) {
            printf("    Shelf %d:\n", j + 1);
            for (int k = 0; k < item; k++) {
                printf("        Enter quantity for Item %d: ", k + 1);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    for (int i = 0; i < section; i++) {
        for (int j = 0; j < shelf; j++) {
            int shelfTotal = 0;
            for (int k = 0; k < item; k++) {
                shelfTotal += arr[i][j][k];
            }

            sectionTotal[i] += shelfTotal;

            if (shelfTotal > highestShelfTotal) {
                highestShelfTotal = shelfTotal;
                highestSection = i;
                highestShelf = j;
            }
        }
    }

    printf("\n------------------------------------\n");
    printf("Total items in each section:\n");
    for (int i = 0; i < section; i++) {
        printf(" Section %d: %d items\n", i + 1, sectionTotal[i]);
    }

    printf("\nShelf with the highest total quantity:\n");
    printf(" Section %d Shelf %d = %d items\n",highestSection+1, highestShelf+1, highestShelfTotal);
    printf("------------------------------------\n");

    return 0;
}
