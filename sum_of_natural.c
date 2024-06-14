#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers is %d\n", N, sum);
    return 0;
}
