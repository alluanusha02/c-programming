#include <stdio.h>

int main() {
    int arr[100], reversed[100], n, i, j;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integer elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0, j = n - 1; i < n; i++, j--) {
        reversed[i] = arr[j];
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", reversed[i]);
    }

    return 0;
}
