#include <stdio.h>

int countDigitOccurrences(int num, int digit) {
    int count = 0;
    while (num != 0) {
        if (num % 10 == digit) {
            count++;
        }
        num /= 10;
    }
    return count;
}

int main() {
    int num, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a digit to count its occurrences: ");
    scanf("%d", &digit);

    int count = countDigitOccurrences(num, digit);
    printf("Digit %d occurs %d times in %d\n", digit, count, num);

    return 0;
}
