#include <stdio.h>
//row=student
//column=subj
int main() {

    int arr[5][4],check=0,avg[5],max=0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks for student %d\n",i+1);
        for (int j = 0; j < 4; j++)
        {
            printf("    Enter marks for subject %d :",j+1);
            scanf("%d",&arr[i][j]);
            check+=arr[i][j];
        }
        avg[i]=check;
        check=0;
        printf("\n");
    }

    printf("\nAverage Marks of each student: [");
    for (int i = 0; i < 5; i++) {
        printf("%.2f|",(float)avg[i] / 4);
    }
    printf("]\n");

    printf("\nHighest marks in each subject: ");
    for (int j = 0; j < 4; j++) {
        int highest = arr[0][j];
        for (int i = 1; i < 5; i++) {
            if (arr[i][j] > highest) {
                highest = arr[i][j];
            }
        }
        printf("%d|", highest);
    }

    
    

    return 0;
}