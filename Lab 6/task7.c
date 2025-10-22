#include <stdio.h>

int main() {
    int num, real, rev=0, digit;

    printf("Enter book code (number): ");
    scanf("%d", &num);

    real = num;

    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;  
        num = num / 10;             
    }


    if (real == rev)   printf("Valid code (Palindrome)\n");
    
    else    printf("Invalid code (Not a palindrome)\n");

    return 0;
}
