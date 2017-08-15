#include <stdio.h>
int main()
{
    int base, expo;

    long result = 1;

    printf("Enter a base number: ");
    scanf("%d", &base);

    printf("Enter an exponent: ");
    scanf("%d", &expo);

    while (exponent != 0)
    {
        result *= base;
        --expo;
    }

    printf("Answer = %ld", result);

    return 0;
}
