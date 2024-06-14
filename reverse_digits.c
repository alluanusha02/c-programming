#include <stdio.h>

int main() {
    int arr[100], reversed[100], n, i, j;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integer elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = n - 1, j = 0; i >= 0; i--, j++) {
        reversed[j] = arr[i];
    }

    printf("Array with reverse elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");

    return 0;
}
