#include <stdio.h>
int main(){
    long int no ,i,f; 
    printf("Enter number :");
    scanf("%d",&no);
    f=no;
    for(i=1;i<no;i++){
        f=f*i;
    }
    printf("%d",f);
    
    return 0;
}