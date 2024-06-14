#include <stdio.h>

unsigned int setBit(unsigned int num, int position) {
    return num | (1U << position);
}

unsigned int clearBit(unsigned int num, int position) {
    return num & ~(1U << position);
}

int main() {
    unsigned int num;
    int position, choice;
    printf("Enter a number: ");
    scanf("%u", &num);
    printf("Enter bit position (0-based): ");
    scanf("%d", &position);
    printf("Choose operation: 1 to set bit, 2 to clear bit: ");
    scanf("%d", &choice);

    if (choice == 1)
        num = setBit(num, position);
    else if (choice == 2)
        num = clearBit(num, position);
    else
        printf("Invalid choice!\n");

    printf("Resulting number: %u\n", num);
    return 0;
}
