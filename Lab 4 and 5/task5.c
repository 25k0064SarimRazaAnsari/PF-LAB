#include <stdio.h>
#include <math.h>
int main(){

    float a,b,c , disc,r1,r2;

    printf("Enter coeffecient a,b,c of quadratic equation :");
    scanf("%f %f %f",&a,&b,&c);

    disc=((b*b)-(4*a*c));
    r1=(-b+sqrt(disc))/(2*a);
    r2=(-b-sqrt(disc))/(2*a);

    if(disc>0){
        printf("The roots are %.2f and %.2f.\n", r1,r2);
        printf("The roots were real and distinct");
    }
    else{
        if(disc==0){
        printf("The root is %.2f\n", r1);
        printf("The roots are real and equal");
        }
        else {
            printf("The roots are complex");
        }
    }
    return 0;
}