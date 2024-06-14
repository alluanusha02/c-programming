#include <stdio.h>

void sumAndAverage(int a, int b, int *sum, float *average) {
    *sum = a + b;
    *average = *sum / 2.0;
}

int main() {
    int num1, num2, sum;
    float average;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    sumAndAverage(num1, num2, &sum, &average);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
