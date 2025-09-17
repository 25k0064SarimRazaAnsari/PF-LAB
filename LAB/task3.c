#include <stdio.h>
int main(){

    int no;
    printf("Enter a number between 65 and 90 =");
    scanf("%d",&no);

    if(no>64 && no<91){
        printf("%d = %c",no, (char)no);
    }
    
    else{
        printf("You enter number out of range\n");
    }

    return 0;
}