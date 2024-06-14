#include <stdio.h>
#include <math.h>

int binaryToDecimal(int num) {
    int decimal = 0, i = 0;
    while (num != 0) {
        int remainder = num % 10;
        decimal += remainder * pow(2, i);
        num /= 10;
        i++;
    }
    return decimal;
}

int main() {
    int num;
    printf("Enter a binary number: ");
    scanf("%d", &num);

    printf("Decimal representation: %d\n", binaryToDecimal(num));

    return 0;
}
