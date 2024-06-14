#include <stdio.h>

int main() {
    unsigned int num, shift;
    printf("Enter a number: ");
    scanf("%u", &num);
    printf("Enter number of positions to left shift: ");
    scanf("%u", &shift);
    printf("Result after left shift: %u\n", num << shift);
    return 0;
}
