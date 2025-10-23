#include <stdio.h>

int main() {
    char arr1[100], arr2[100];
    int i = 0, flag = 0;

    printf("Enter first string: ");
    gets(arr1);
    printf("Enter second string: ");
    gets(arr2);

    while (arr1[i] != '\0' && arr2[i] != '\0') {
        if (arr1[i] != arr2[i]) {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0 && arr1[i] == '\0' && arr2[i] == '\0') {
        printf("Both strings are equal.\n");
    }
    else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
