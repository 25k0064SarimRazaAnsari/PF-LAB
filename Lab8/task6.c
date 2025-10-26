#include <stdio.h>

int main() {
    int size;

    printf("Enter size of game :");
    scanf("%d",&size);
    
    int arr[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter no. for row %d , column %d :",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    printf("Orginal Game board :\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    

    //transpose
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    for (int i = 0; i < size; i++)
    {
        int j=0,k=size-1;
        while (j<k)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j++;
            k--;
        }
        
    }

    printf("\nRotating Game board :\n");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}