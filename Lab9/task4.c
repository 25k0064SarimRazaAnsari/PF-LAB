#include <stdio.h>

void passbyvalue(int num1){
    printf("Enter no. to modify :");
    scanf("%d",&num1);
    return;
}

void passByReference(int *num1){
    printf("Enter no. to modify :");
    scanf("%d",num1);
    return;
}

int main(){
    int num1=10;

    printf("------------Pass by value------------\n");
    printf("Before Update value :%d\n",num1);
    passbyvalue(num1);
    printf("After Update value :%d\n",num1);

    printf("------------Pass by reference------------\n");
    printf("Before Update reference :%d\n",num1);
    passByReference(&num1);
    printf("After Update reference :%d\n",num1);

}