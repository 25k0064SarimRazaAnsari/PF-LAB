#include <stdio.h>
int main(){
	int x,sum=0,i=0;
	float avg;
	do{
		printf("Enter no ");
		scanf("%d",&x);
		if(x==-1){
			break;
		}
		else {
			sum=sum+x;
			i++;
		}
		
		
	}
	while(x!=-1);
	avg=(float)sum/i;
	printf("\nThe avg is %.2f",(avg));
    
    return 0;
}
