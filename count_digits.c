#include <stdio.h>

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int count = countDigits(num);
    printf("Number of digits: %d\n", count);

    return 0;
}
