#include <stdio.h>


void roads(int arr[],int target, int *r1, int *r2,int *flag){
    
    int i=0,j=0;

    for (j = 0; j < 5; j++){
        for (i = j+1; i < 5; i++){
            
            if (arr[i]+arr[j]==target)
            {
                *r2=i;
                *r1=j;
                *flag=1;
                return;
            }
            
        }
        
    }

}




int main() {
    int arr[5];
    int flag=0;
    int target;
    int r1,r2;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter vehicle no. for road %d :",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter target value : ");
    scanf("%d",&target);
    
    roads(arr,target,&r1,&r2,&flag);

    if(flag) printf("\n\nRoad number %d and %d\n",r1+1,r2+1);
    else printf("No such roads");

    


    return 0;
}