#include <stdio.h>
int main(){
    int dep, course;

    printf("Enter you department (1.CS, 2.EE, 3.BBA) :");
    scanf("%d",&dep);
    switch (dep){
    case 1:
        printf("---------------CS---------------------\n");
        printf("1. Programming Fundamental\n2. ICT\n3. AI\n4.CY\n\n");
        printf("Choose Your course :");
        scanf("%d", &course);

        switch (course){
        case 1:
            printf("You chose Programming Fundamental");
            break;
        case 2:
            printf("You chose ICT");
            break;
        case 3:
            printf("You chose AI");
            break;
        case 4:
            printf("You chose CY");
            break;
        
        default:
            printf("You entered wrong digit");
            return -1;
            break;
        }
        break;

        
    case 2:
        printf("---------------EE---------------------\n");
        printf("1. Electric Circuits\n2. Electronics\n3. Logic design\n4. Electro Magnetism \n\n");
        printf("Choose Your course :");
        scanf("%d", &course);

        switch (course){
        case 1:
            printf("You chose Electric Circuits");
            break;
        case 2:
            printf("You chose Electronics");
            break;
        case 3:
            printf("You chose Logic design");
            break;
        case 4:
            printf("You chose Electro Magnetism");
            break;
        
        default:
            printf("You entered wrong digit");
            return -1;
            break;
        }
        break;
        
    case 3:
        printf("---------------BBA---------------------\n");
        printf("1. Marketing\n2. Finance and Banking\n3. Entrepreneurship\n4. Business Analytics \n\n");
        printf("Choose Your course :");
        scanf("%d", &course);

        switch (course){
        case 1:
            printf("You chose Marketing");
            break;
        case 2:
            printf("You chose Finance and Banking");
            break;
        case 3:
            printf("You chose Entrepreneurship");
            break;
        case 4:
            printf("You chose Business Analytics");
            break;
        
        default:
            printf("You entered wrong digit");
            return -1;
            break;
        }
        break;


    
    default:
        printf("You entered wrong digit");
        return -1;
        break;
    }


}
