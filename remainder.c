#include <stdio.h>

int getRemainder(int dividend, int divisor) {
    return dividend - (divisor * (dividend / divisor));
}

int main() {
    int dividend, divisor;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    int remainder = getRemainder(dividend, divisor);
    printf("Remainder: %d\n", remainder);

    return 0;
}
