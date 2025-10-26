#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    int size,count=0,row=0,max=0,rowNum;
    srand(time(0));
    
    printf("Enter size of hall :");
    scanf("%d",&size);
    
    int arr[size][size];

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++)
        {
            arr[i][j]= rand() %2;
        }
        printf("\n");
    }

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr[i][j]);
            if (arr[i][j]==0)
            {
                count++;
                row++;
            }
        }
        printf("%4d ",row);
        if (max<row)
        {
            max=row;
            rowNum=i+1;
        }
        

        printf("\n");
        row=0;
    }
    

    printf("Total Available seats = %d \n",count);
    printf("Row with most empty seat(With empty seat %d) = %d ",max,rowNum);

    return 0;
}