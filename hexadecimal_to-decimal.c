#include <stdio.h>
#include <string.h>
#include <math.h>

int hexadecimalToDecimal(char hex[]) {
    int length = strlen(hex);
    int base = 1; // 16^0
    int decimal = 0;

    for (int i = length - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - '0') * base;
            base *= 16;
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 'A' + 10) * base;
            base *= 16;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            decimal += (hex[i] - 'a' + 10) * base;
            base *= 16;
        }
    }
    return decimal;
}

int main() {
    char hex[20];
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    printf("Decimal representation: %d\n", hexadecimalToDecimal(hex));

    return 0;
}
