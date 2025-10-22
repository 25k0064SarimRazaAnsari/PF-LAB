#include <stdio.h>
int main(){

    int no;
    printf("Enter a number :");
    scanf("%d",&no);

    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",no,i,no*i);
    }
    return 0;
}