#include <stdio.h>

void countDown(int days){
    if(days < 0) return;
    printf("%d\n", days);
    countDown(days - 1);
}

int main(){
    int n;
    printf("Enter number of events: ");
    scanf("%d", &n);

    int days[n];

    for(int i=0; i<n; i++){
        printf("Enter remaining days %d: ", i+1);
        scanf("%d", &days[i]);
    }

    for(int i=0; i<n; i++){
        printf("\nCountdown for Event %d:\n", i+1);
        countDown(days[i]);
    }

    return 0;
}