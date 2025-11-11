#include <stdio.h>


void analyzeData(int *arr,int *max,int *min, int n, float *avg){
    
    *max=arr[0];
    *min=arr[0];

    int tot=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>*max)
        {
            *max=arr[i];
        }
    }
    printf("The max is : %d\n",*max);

    for (int i = 0; i < n; i++)
    {
        if (arr[i]<*min)
        {
            *min=arr[i];
        }
    }
    printf("The min is : %d\n",*min);
    
    for (int i = 0; i < n; i++)
    {
        tot+=arr[i];
    }

    *avg=tot/5.0;
    printf("The avg is : %.2f\n",*avg);
    

}



int main() {
    
    int n=5;
    int arr[n];
    int max=0,min=0;
    float avg=0.0;


    for (int i = 0; i < n; i++)
    {
        printf("Enter no. for index %d :",i);
        scanf("%d",&arr[i]);
    }
    
    analyzeData(arr,&max,&min, n,&avg);



    return 0;
}