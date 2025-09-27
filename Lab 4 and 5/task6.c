#include <stdio.h>
int main(){
    char shape, choise;
    int l,b,c;

    printf("Choose shape (c =circle, r= rectangle, t=triangle) ");
    scanf(" %c", &shape);

    switch (shape)
    {
    case 'c':
        printf("You chose circle\n");
        printf("Press 'a' for area or 'p' for perimetrer ");
        scanf(" %c", &choise);

        switch (choise){
        case 'a':
            printf("Enter raduis of the circle ");
            scanf("%d", &l);
            printf("The Area of Circle is : %.2f",3.14*l*l);
            break;
        case 'p':
            printf("Enter raduis of the circle ");
            scanf("%d", &l);
            printf("The perimeter (ie circimference) of Circle is : %.2f",(2*3.14*l));
            break;
        
        default:
            printf("You Enter wrong charater");
            return -1;
            break;
        }

        break;
    
    case 'r':
        printf("You chose rectangle\n");
        printf("Press 'a' for area or 'p' for perimetrer ");
        scanf(" %c", &choise);

        switch (choise){
        case 'a':
            printf("Enter lenghth and width of the rectangle ");
            scanf("%d %d", &l, &b);
            printf("The Area of rectangle is : %d",l*b);
            break;
        case 'p':
            printf("Enter length and width of the rectangle ");
            scanf("%d %d", &l, &b);
            printf("The perimeter of rectangle is : %d",2*(l+b));
            break;
    
        default:
            printf("You Enter wrong charater");
            return -1;
            break;
        }

        break;

    case 't':
        printf("You chose triangle\n");
        printf("Press 'a' for area or 'p' for perimetrer ");
        scanf(" %c", &choise);

        switch (choise){
        case 'a':
            printf("Enter lenghth and height of the triangle ");
            scanf("%d %d", &l, &b);
            printf("The Area of triangle is : %.2f",0.5*l*b);
            break;
        case 'p':
            printf("Enter three sides of the triangle ");
            scanf("%d %d %d", &l, &b, &c);
            printf("The perimeter of triangle is : %d",l+b+c);
            break;
    
        default:
            printf("You Enter wrong charater");
            return -1;
            break;
        }

        break;
    
    
    
    default:
     printf("You Enter wrong charater");
        return -1;
        break;
    }
    return 0;
}