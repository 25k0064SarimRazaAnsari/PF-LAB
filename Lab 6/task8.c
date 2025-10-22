#include <stdio.h>

int main() {
    int no;
    long long catalan;
    printf("Enter no: ");
    scanf("%d", &no);

    printf("First %d Catalan numbers:\n", no);

    for (int i = 0; i < no; i++) {
        long long fact2n = 1, factn = 1, factn1 = 1;

        for (int j = 1; j <= 2*i; j++) {
            fact2n *= j;
        }

        for (int j = 1; j<=i; j++) {
            factn *= j;
        }

        for (int j = 1; j<=i+1; j++) {
            factn1 *= j;
        }

        catalan = fact2n / (factn1 * factn);
        printf("%lld ", catalan);
    }

    return 0;
}
