#include <stdio.h>

int main() {

    int arr[5],temp;

    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d digit : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("Your array = ");
    for (int i = 0; i < 5; i++)
    {
        printf("|%d|",arr[i]);
    }

    for (int i = 0; i < 5/2; i++)
    {
            temp=arr[i];
            arr[i]=arr[5-1-i];
            arr[5-1-i]=temp;
        
    }

    printf("\n\nAfter Reversal");
    for (int i = 0; i < 5; i++)
    {
        printf("|%d|",arr[i]);
    }
    
    return 0;
}