#include <stdio.h>
#include <math.h>

int main() {
    double x, result;
    int n;

    printf("Enter the base (X) and the exponent (N): ");
    scanf("%lf %d", &x, &n);

    result = pow(x, n);

    printf("%.2lf^%d = %.2lf\n", x, n, result);

    return 0;
}
