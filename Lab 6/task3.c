#include <stdio.h>

int main() {
    int no, i, j, flag;

    printf("Enter a number: ");
    scanf("%d", &no);

    if (no <= 1){
        printf("%d is neither a prime number non consonent.\n", no);
    } else {
        flag = 0;
        for (i = 2; i <= no / 2; i++) {
            if (no % i == 0) {
                flag=1;
                break;
            }
        }
        if (flag == 0)  printf("%d is a prime number.\n", no);
        else    printf("%d is not a prime number (Consonent) .\n", no);
    }

    printf("Prime numbers from 1 to %d are: \n", no);
    for (i = 2; i <= no; i++){
        flag = 0;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag=1;
                break;
            }
        }
        if (flag == 0)  printf("%d | ", i);
    }

    return 0;
}
