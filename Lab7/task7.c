#include <stdio.h>
int main(){
	
	char arr[100], alpha;
	int vowel=0, cons=0;
	
	printf("Enter a word :");
	gets(arr);
	
	for (int i=0;arr[i]!='\0';i++){
		char alpha=arr[i];
		
		if (alpha>='A'&&alpha<='Z'){
			alpha+=32;
			
		}
		
		if (alpha>='a'&&alpha<='z'){
			if (alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'){
				vowel++;
			}
			else{
				cons++;
			}
		}	

	}
	
	printf("Vowel are:%d\n",vowel);
	printf("Consonant are:%d",cons);
		
	return 0;
	
}