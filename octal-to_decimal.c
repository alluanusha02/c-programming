#include <stdio.h>
#include <math.h>

int octalToDecimal(int num) {
    int decimal = 0, i = 0;
    while (num != 0) {
        int remainder = num % 10;
        decimal += remainder * pow(8, i);
        num /= 10;
        i++;
    }
    return decimal;
}

int main() {
    int num;
    printf("Enter an octal number: ");
    scanf("%d", &num);

    printf("Decimal representation: %d\n", octalToDecimal(num));

    return 0;
}
