#include <stdio.h>
int main(){
	
	int array1[5],array2[5],combine[10],index;
	
	for (int i=0;i<5;i++){
		printf("Enter number of Array 1:");
		scanf("%d",&array1[i]);
	} 
	printf("\n");
	for (int i=0;i<5;i++){
		printf("Enter number of array 2:");
		scanf("%d",&array2[i]);
	}
	
	index=10;
	for (int i=0;i<5;i++){
		combine[i]=array1[i];
	}
	
	for (int i=0;i<5;i++){
		combine[5+i]=array2[i];
	}
	
	printf("--------------------------------------------\n");
	printf("Combined Array is :");
	for (int i=0;i<index;i++){
		
		printf("%d|",combine[i]);
		
		
	}
	
	
	return 0;
	
	
	
}