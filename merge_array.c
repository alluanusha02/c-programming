#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i, j, k;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    printf("Enter %d integer elements for the first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
        merged[i] = arr1[i];
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    printf("Enter %d integer elements for the second array:\n", n2);
    for (j = 0; j < n2; j++) {
        scanf("%d", &arr2[j]);
        merged[i + j] = arr2[j];
    }

    printf("Merged array: ");
    for (k = 0; k < n1 + n2; k++) {
        printf("%d ", merged[k]);
    }

    return 0;
}
