#include <stdio.h>

int main() {
    int arr[100], no, del, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &no);

    for (i = 0; i < no; i++) {
        printf("Enter %d index :",i);
        scanf("%d", &arr[i]);
    }

    printf("Enter value to delete: ");
    scanf("%d", &del);

    for (i = 0; i < no; i++) {
        if (arr[i] == del) {
            for (j = i; j < no - 1; j++) {
                arr[j] = arr[j + 1];
            }
            no--;   
            i--; 
        }
    }

    printf("Array after deletion: ");
    for (i = 0; i < no; i++) {
        printf("%d|", arr[i]);
    }

    printf("\nNew size of array: %d\n", no);

    return 0;
}
