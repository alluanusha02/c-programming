#include <stdio.h>

int minimumBits(int num) {
    int count = 0;
    while (num) {
        num >>= 1;
        count++;
    }
    return count;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Minimum number of bits to store %d: %d\n", num, minimumBits(num));
    return 0;
}
