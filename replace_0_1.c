#include <stdio.h>

int main() {
    int arr[100], n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integer elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] = 0;
        } else {
            arr[i] = 1;
        }
    }

    printf("Modified array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
