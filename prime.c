#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Prime numbers from 1 to %d are:\n", N);
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
