#include <stdio.h>

int main(){

    int no, i, rem, even = 0, odd = 0;

    printf("Enter no : ");
    scanf("%d", &no);

    while (no){
        rem = no % 10;

        if (rem % 2 == 0)
        {
            even = even + 1;
        }

        else
        {
            odd = odd + 1;
        }

        no = no / 10;
    }

    printf("Even = %d\n", even);

    printf("odd = %d", odd);
    return 0;
}