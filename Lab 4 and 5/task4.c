#include <stdio.h>
int main(){
    char menu, choise;

    printf("Press 'f' for fast food and 'd' for drink :");
    scanf(" %c",&menu);
    switch (menu)
    {
    case 'f':
        printf("------------------FAST FOOD---------------------\n");
        printf("b = burger\np = pizza\ns = sandwich\nr = roll\n");
        printf("Select :");
        scanf(" %c",&choise);
        switch(choise){
            case 'b':
                printf("You ordered a burger");
                break;
            case 'p':
                printf("You ordered a pizza");
                break;
            case 's':
                printf("You ordered a sandwich");
                break;
            case 'r':
                printf("You ordered a roll");
                break;
            default:
                printf("You entered wrong character");
                return -1;
                break;
        }

        break;
    case 'd':
        printf("------------------DRINK---------------------\n");
        printf("p = pepsi\ns = sprite\nd = dew\nf = fanta\n");
        printf("Select :");
        scanf(" %c",&choise);
        
    
         switch(choise){
            case 'p':
                printf("You orderd a Pepsi");
                break;
            case 's':
                printf("You orderd a Sprite");
                break;
            case 'd':
                printf("You orderd a Dew");
                break;
            case 'f':
                printf("You orderd a Fanta");
                break;
            default:
                printf("You entered wrong character");
                return -1;
                break;
        }
        break;

    default:
        printf("You entered wrong character");
        return -1;
        break;
    }

    return 0;

}