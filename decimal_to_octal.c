#include <stdio.h>

void decimalToOctal(int num) {
    if (num == 0) {
        return;
    }
    decimalToOctal(num / 8);
    printf("%d", num % 8);
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Octal representation: ");
    if (num == 0) {
        printf("0");
    } else {
        decimalToOctal(num);
    }
    printf("\n");

    return 0;
}
