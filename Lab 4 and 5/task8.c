#include <stdio.h>
#include <math.h>
int main(){
    float amount,rate,tot,emi;
    int time, choise;

    printf("Enter loan amount :");
    scanf("%f",&amount);
    printf("Enter time in years :");
    scanf("%d",&time);
    printf("Enter Interest type (1. Simple, 2.Compound) :");
    scanf("%d",&choise);

    if(choise==1){
        printf("Enter Simple interest rate :");
        scanf("%f",&rate);
        tot=amount+((amount*rate*time)/100);
        emi=tot/(time*12);
        printf("EMI of simple interest is :%.2f",emi);
    }
    else{
        if(choise==2){
            printf("Enter compound interest rate :");
            scanf("%f",&rate);
            tot=amount*pow((1+rate/100),time);
            emi=tot/(time*12);
            printf("EMI of compound interest is :%.2f",emi);
        }
        else {
            printf("Please enter correct integer");
        }
    }
    return 0;
}