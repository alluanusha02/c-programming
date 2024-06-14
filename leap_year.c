#include <stdio.h>

int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return 1;
            else
                return 0;
        } else
            return 1;
    } else
        return 0;
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Leap years from 1 to %d are:\n", N);
    for (int i = 1; i <= N; i++) {
        if (isLeapYear(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
