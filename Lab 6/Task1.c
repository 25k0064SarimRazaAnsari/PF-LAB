#include <stdio.h>
int main()
{

    int pin, i, rem, sum = 0;

    printf("Enter four digit PIN :");

    scanf("%d", &pin);

    for (i = 1; i <= 4; i++)
    {
        rem = pin % 10;
        sum = sum + rem;
        pin = pin / 10;
    }

    if (sum > 10)
        printf("Strong PIN");

    else
        printf("Weak PIN");

    return 0;
}