#include <stdio.h>

int main() {
    const int num = 10;
    int *ptr = (int *)&num;

    printf("Original value of num: %d\n", num);
    *ptr = 20;
    printf("Modified value of num: %d\n", num);

    return 0;
}
