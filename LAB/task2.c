#include <stdio.h>
int main(){
    int num1,num2,swap;

    printf("Enter num1 =");
    scanf("%d",&num1);
    printf("Enter num2 =");
    scanf("%d",&num2);

    swap=num1;
    num1=num2;
    num2= swap;

    printf("After Swapping 'num1' is %d\n",num1);
    printf("After Swapping 'num2' is %d\n",num2);

    return 0;
}