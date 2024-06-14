#include <stdio.h>

int main() {
    float basic, da, hra, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    da = basic * 0.2;  // Dearness Allowance is 20% of basic salary
    hra = basic * 0.1; // House Rent Allowance is 10% of basic salary

    gross = basic + da + hra;

    printf("Gross Salary: %.2f\n", gross);

    return 0;
}
