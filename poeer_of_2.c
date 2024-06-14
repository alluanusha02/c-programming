#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int num) {
    if (num <= 0) {
        return false;
    }
    return (num & (num - 1)) == 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPowerOfTwo(num)) {
        printf("%d is a power of 2\n", num);
    } else {
        printf("%d is not a power of 2\n", num);
    }

    return 0;
}