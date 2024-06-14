#include <stdio.h>

unsigned int swapBits(unsigned int num, int p1, int p2) {
    unsigned int bit1 = (num >> p1) & 1;
    unsigned int bit2 = (num >> p2) & 1;
    if (bit1 != bit2) {
        num ^= (1U << p1) | (1U << p2);
    }
    return num;
}

int main() {
    unsigned int num;
    int p1, p2;
    printf("Enter a number: ");
    scanf("%u", &num);
    printf("Enter positions of two bits to swap (0-based): ");
    scanf("%d %d", &p1, &p2);
    printf("Number after swapping bits: %u\n", swapBits(num, p1, p2));
    return 0;
}
