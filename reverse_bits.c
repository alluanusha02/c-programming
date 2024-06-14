#include <stdio.h>

unsigned int reverseBits(unsigned int num) {
    unsigned int reversed = 0;
    int i;
    for (i = 0; i < 32; i++) {
        if (num & (1 << i))
            reversed |= (1 << (31 - i));
    }
    return reversed;
}

int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);
    printf("Reversed bits: %u\n", reverseBits(num));
    return 0;
}
