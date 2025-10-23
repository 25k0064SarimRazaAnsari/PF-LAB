#include <stdio.h>

int main() {

    int arr[5];
    int small , big , indexS , indexL;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Tempratue of day %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    small=arr[0];
    big=arr[0];

    printf("The array is= ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d|",arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if(small>arr[i]){
            small=arr[i];
            indexS=i;
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        if(big<arr[i]){
            big=arr[i];
            indexL=i;

        }
        
    }

    printf("\nThe coldest temprature is %d at day %d\n",small,indexS+1);
    printf("The hottest temprature is %d at day %d",big,indexL+1);
    


    return 0;
}