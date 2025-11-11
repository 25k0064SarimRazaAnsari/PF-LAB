#include <stdio.h>
#include <string.h>
char *formatname(char *first, char *last){
    static char arr[20];

    strcpy(arr,first);
    strcat(arr," ");
    strcat(arr,last);

    return arr;
}


int main() {

    char first[10];
    char last[10];
    printf("Enter your first name :");
    scanf(" %s",&first);
    printf("Enter your second name :");
    scanf(" %s",&last);

    char *foramtName=formatname(first,last);

    printf("Full name : %s",foramtName);
    return 0;
}