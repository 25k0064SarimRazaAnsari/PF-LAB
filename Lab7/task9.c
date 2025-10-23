#include <stdio.h>

int main() {
    char arr[500];
    int i = 0, length = 0, max = 0, start = 0, check = 0;

    printf("Enter a sentence: ");
    gets(arr);

    while (1) {
        if (arr[i] == ' ' || arr[i] == '\0') {
            if (length > max) {
                max = length;
                check = start;
            }
            length = 0;
            start = i + 1;
        } 
        else {
            length++;
        }

        if (arr[i] == '\0')
            break;

        i++;
    }

    printf("The longest word is: ");
    for (i = check; i < check + max; i++) {
        printf("%c", arr[i]);
    }

    printf("\nLength= %d\n", max);

    return 0;
}
