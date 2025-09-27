#include <stdio.h>
int main(){
    
    int age, choise;

    printf("Enter your age :");
    scanf("%d",&age);
    if(age<=12){
        printf("Select movie type (1. Action, 2. Comedy, 3. Horror) :");
        scanf("%d",&choise);
        switch (choise){
        case 1:
            printf("Ticket type = Child Ticket\nMovie Booked = Action");
            break;
        
        case 2:
            printf("Ticket type = Child Ticket\nMovie Booked = Comedy");
            break;
        
        case 3:
            printf("Ticket type = Child Ticket\nMovie Booked = Horror");
            break;
        
        default:
            printf("Enter Wrong choise");
            return -1;
            break;
        }

    }
    
    else if(age>12 && age<=60){
        printf("Select movie type (1. Action, 2. Comedy, 3. Horror) :");
        scanf("%d",&choise);
        switch (choise){
        case 1:
            printf("Ticket type = Adult Ticket\nMovie Booked = Action");
            break;
        
        case 2:
            printf("Ticket type = Adult Ticket\nMovie Booked = Comedy");
            break;
        
        case 3:
            printf("Ticket type = Adult Ticket\nMovie Booked = Horror");
            break;
        
        default:
            printf("Enter Wrong choise");
            return -1;
            break;
        }

    }
   
    else {
        printf("Select movie type (1. Action, 2. Comedy, 3. Horror) :");
        scanf("%d",&choise);
        switch (choise){
        case 1:
            printf("Ticket type = Senior Citizen Ticket\nMovie Booked = Action");
            break;
        
        case 2:
            printf("Ticket type = Senior Citizen Ticket\nMovie Booked = Comedy");
            break;
        
        case 3:
            printf("Ticket type = Senior Citizen Ticket\nMovie Booked = Horror");
            break;
        
        default:
            printf("Enter Wrong choise");
            return -1;
            break;
        }

    }
    return 0;
}