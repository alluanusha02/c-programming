#include <stdio.h>

void sumAndProductOfDigits(int num, int *sum, int *product) {
    *sum = 0;
    *product = 1;
    while (num != 0) {
        int digit = num % 10;
        *sum += digit;
        *product *= digit;
        num /= 10;
    }
}

int main() {
    int num, sum, product;
    printf("Enter a number: ");
    scanf("%d", &num);

    sumAndProductOfDigits(num, &sum, &product);
    printf("Sum of digits: %d\n", sum);
    printf("Product of digits: %d\n", product);

    return 0;
}
