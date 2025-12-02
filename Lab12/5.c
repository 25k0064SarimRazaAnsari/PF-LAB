#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

float similarity(char *arr,char *pattern){
    int length = strlen(pattern);
    int match = 0;
    for (int i = 0; i < length && i < strlen(arr); i++)
    {
        char a=arr[i];
        char p=pattern[i];

        if ((islower(a)&&islower(p))||(isupper(a)&&isupper(p))||(isdigit(a)&&isdigit(p))||(!isalnum(a)&&!isalnum(p)))
        {
            match++;
        }
        
    }
    return ((float)match / length) * 100.0;
}



int main(){

    int attempt;


    printf("Enter number of attempts :");
    scanf("%d",&attempt);
    getchar();

    char **arr=malloc(attempt*sizeof(char*));
    char *pattern=malloc(100*sizeof(char));

    for (int i = 0; i < attempt; i++)
    {
        arr[i]=malloc(100*sizeof(char));
        printf("Enter password :");
        fgets(arr[i],100,stdin);
        arr[i][strcspn(arr[i],"\n")]='\0';
    }
    
    printf("Enter password pattern :");
    fgets(pattern,100,stdin);
    pattern[strcspn(pattern,"\n")]='\0';

    float *similarities=malloc(attempt*sizeof(float));

    for (int i = 0; i < attempt; i++)
    {
        similarities[i]=similarity(arr[i],pattern);
    }
    
    printf("\n\nSimilarity:\n");
    for (int i = 0; i < attempt; i++)
    {
        printf("%s\t\t %.2f\n",arr[i],similarities[i]);
    }

    float maxSim = similarities[0];
    int maxIndex = 0;
    for (int i = 1; i < attempt; i++) {
        if (similarities[i] > maxSim) {
            maxSim = similarities[i];
            maxIndex = i;
        }
    }

    printf("\nMaximum similarity %d : %s %.2f\n",maxIndex + 1, arr[maxIndex], maxSim);

    free(pattern);
    for (int i = 0; i < attempt; i++) {
        free(arr[i]);
    }
    free(arr);
    free(similarities);

    return 0;
    

    
}