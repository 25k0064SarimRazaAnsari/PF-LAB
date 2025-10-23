#include <stdio.h>
int main(){

	int arr[5], temp;
	
	for (int i=0;i<5;i++){
		printf("Enter Number for index %d : ",i);
		scanf("%d",&arr[i]);
	}
	
    temp=arr[4];
	
	for (int i=4;i>0;i--){
		arr[i]=arr[i-1];
	}
	
	arr[0]=temp;
	
	printf("The new array is :\n");
	for (int i=0;i<5;i++){
		printf("%d|",arr[i]);
	}
	
	
	
	
}