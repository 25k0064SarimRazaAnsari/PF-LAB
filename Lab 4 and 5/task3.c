#include <stdio.h>
int main(){

    char choise, choise1;

    printf("What do you manage book or magazines (b = Book & m = magazine ) :");
    scanf(" %c",&choise);

    switch (choise){
    case 'b':
        printf("You chose book, wanna issue or return it?\n");
        printf("Press 'i'for issue or 'r' for return it :");
        scanf(" %c",&choise1);
        switch (choise1){
        case 'i':
            printf("You issued a book\n");
            break;
        case 'r':
            printf("You returned a book\n");
            break;
        default:
            printf("You entered wrong charater");
            return -1;
            break;}
    break;
    
    case 'm':
        printf("You chose magazine, wanna issue or return it?\n");
        printf("Press 'i'for issue or 'r' for return it :");
        scanf(" %c",&choise1);
        switch (choise1){
        case 'i':
            printf("You issued a magazine\n");
            break;
        case 'r':
            printf("You returned a magazine\n");
            break;
        default:
            printf("You entered wrong charater");
            return -1;
            break;}

    break;
    default:
            printf("You Entered a wrong character");
            return -1;
            break;
    }

    return 0;

}