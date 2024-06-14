#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int n = 0;

    while (num != 0) {
        num /= 10;
        n++;
    }

    num = original;
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }

    return original == sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }

    return 0;
}
