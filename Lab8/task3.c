#include <stdio.h>

int main() {

    char arr[3][10], ch;
    int vowel=0;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter Word %d :",i+1);
        gets(arr[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; arr[i][j]!='\0'; j++)
        {
            ch=arr[i][j];
            if(ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'|| ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
                vowel++;
            }
        }
        
    }
    
    printf("Total Vowels are: %d", vowel);

    return 0;
}