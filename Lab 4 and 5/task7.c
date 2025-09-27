#include <stdio.h>
int main(){
    
    int user, pass;

    // 1= admin, since array is not studied yet 
    printf("Enter your username (Press 1 for admin) :");
    scanf("%d",&user);

    if(user==1){
        printf("Enter your password :");
        scanf("%d",&pass);
        if(pass==1234){
            printf("Login successfully");
        }
        else {printf("You entered wrong Password");
            return -1;
        }
    }
    else {
        printf("You entered wrong username");
        return -1;
    }
    return 0;


}