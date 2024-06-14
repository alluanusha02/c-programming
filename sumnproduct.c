#include <stdio.h>

int main() {
    int arr[100], n, i;
    int sum = 0, product = 1;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integer elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        product *= arr[i];
    }

    printf("Sum of elements: %d\n", sum);
    printf("Product of elements: %d\n", product);

    return 0;
}
