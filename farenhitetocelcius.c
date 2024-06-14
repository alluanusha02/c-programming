#include <stdio.h>

int main() {
    float tempF, tempC;
    int choice;

    printf("Choose conversion: \n1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &tempF);
        tempC = (tempF - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", tempC);
    } else if (choice == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &tempC);
        tempF = (tempC * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", tempF);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
