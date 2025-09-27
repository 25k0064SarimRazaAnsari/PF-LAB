#include <stdio.h>
int main(){
    float basicSalary, hra, da,grossSalary;
    printf("Enter your salary =");
    scanf("%f",&basicSalary);

    hra=basicSalary*0.1;
    da=basicSalary*0.05;
    grossSalary=basicSalary+hra+da;

    printf("--------------------------------------------------------------------------------------------\n");
    printf("Your house rent Allowance =%.2f\n",hra);
    printf("Your Dearness Allowance =%.2f\n",da);
    printf("Your gross salary (after adding House rent and Dearness allowance) is =%.2f\n",grossSalary);
    printf("--------------------------------------------------------------------------------------------");
    return 0;
}