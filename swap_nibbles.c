#include <stdio.h>

unsigned char swapNibbles(unsigned char num) {
    return (num << 4) | (num >> 4);
}

int main() {
    unsigned char num;
    printf("Enter a byte (0-255): ");
    scanf("%hhu", &num);
    printf("Swapped nibbles: %02x\n", swapNibbles(num));
    return 0;
}
