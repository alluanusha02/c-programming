#include <stdio.h>

int main() {
    int num;
    char choice;
    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0) {
            printf("The number is POSITIVE\n");
        } else if (num < 0) {
            printf("The number is NEGATIVE\n");
        } else {
            printf("The number is ZERO\n");
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);  // Space before %c to consume any whitespace
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
