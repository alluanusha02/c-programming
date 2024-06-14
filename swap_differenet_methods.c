#include <stdio.h>

// Method 1: Using a temporary variable
void swapTemp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Method 2: Without using a temporary variable (Addition and Subtraction)
void swapAddSub(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// Method 3: Without using a temporary variable (Multiplication and Division)
void swapMulDiv(int *a, int *b) {
    *a = *a * *b;
    *b = *a / *b;
    *a = *a / *b;
}

// Method 4: Using bitwise XOR
void swapXOR(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Original: x = %d, y = %d\n", x, y);

    swapTemp(&x, &y);
    printf("After swap using temporary variable: x = %d, y = %d\n", x, y);

    swapAddSub(&x, &y);
    printf("After swap using addition and subtraction: x = %d, y = %d\n", x, y);

    swapMulDiv(&x, &y);
    printf("After swap using multiplication and division: x = %d, y = %d\n", x, y);

    swapXOR(&x, &y);
    printf("After swap using XOR: x = %d, y = %d\n", x, y);

    return 0;
}
