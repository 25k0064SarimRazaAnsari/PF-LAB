#include <stdio.h>

int main() {

    float arr[24] ,tot=0.0;
    
    for (int i = 0; i < 24; i++)
    {
        printf("Enter power usage (in watts) of %d hr:",i+1);
        scanf(" %f",&arr[i]);
    }

    for (int i = 0; i < 24; i++)
    {
        tot+=arr[i];
    }
    printf("------------------------------------------------------\n");
    printf("The total power usage of a day is = %.2f\n",tot);
    printf("The average power usage of a day is = %.2f\n",tot/24.0);
    printf("------------------------------------------------------");
    
    

    return 0;
}