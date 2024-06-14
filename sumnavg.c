
#include <stdio.h>

int main() {
    int num1, num2, sum;
    float average;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    average = sum / 2.0;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
