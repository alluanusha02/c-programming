#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPerfectSquare(int num) {
    int root = sqrt(num);
    return root * root == num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfectSquare(num)) {
        printf("%d is a perfect square\n", num);
    } else {
        printf("%d is not a perfect square\n", num);
    }

    return 0;
}
