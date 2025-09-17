#include <stdio.h>
int main(){
    int sub1,sub2,sub3,marks;
    float per;
    printf("Enter marks of first subject (Out of 100)= ");
    scanf("%d",&sub1);
    printf("Enter marks of second subject (Out of 100)= ");
    scanf("%d",&sub2);
    printf("Enter marks of third subject (Out of 100)= ");
    scanf("%d",&sub3);

    marks=sub1+sub2+sub3;
    per=(marks/300.0f)*100;

    printf("Your marks =%d\n",marks);
    printf("Your percentage =%.2f\n",per);

    return 0;
}