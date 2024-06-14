#include <stdio.h>
#include <math.h>

int main() {
    double num, floorValue, ceilValue;

    printf("Enter a floating-point number: ");
    scanf("%lf", &num);

    floorValue = floor(num);
    ceilValue = ceil(num);

    printf("Floor value: %.2f\n", floorValue);
    printf("Ceil value: %.2f\n", ceilValue);

    return 0;
}
