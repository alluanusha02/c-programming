#include <stdio.h>

void printTable(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printTable(num);

    return 0;
}
