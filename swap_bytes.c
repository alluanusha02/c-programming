#include <stdio.h>

unsigned short swapBytes(unsigned short num) {
    return (num << 8) | (num >> 8);
}

int main() {
    unsigned short num;
    printf("Enter a 16-bit hexadecimal number (e.g., 0x1234): ");
    scanf("%hx", &num);
    printf("Swapped bytes: 0x%04hx\n", swapBytes(num));
    return 0;
}
