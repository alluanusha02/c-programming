
#include <stdio.h>

int main() {
    int arr1[100], arr2[100], result[100];
    int n, i;

    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);

    printf("Enter %d integer elements for the first array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d integer elements for the second array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Addition result: ");
    for (i = 0; i < n; i++) {
        result[i] = arr1[i] + arr2[i];
        printf("%d ", result[i]);
    }

    printf("\nSubtraction result: ");
    for (i = 0; i < n; i++) {
        result[i] = arr1[i] - arr2[i];
        printf("%d ", result[i]);
    }

    return 0;
}
