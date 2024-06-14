#include <stdio.h>

int main() {
    int arr[100], n, num, i;
    int found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integer elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("%d is found in the array.\n", num);
    } else {
        printf("%d is not found in the array.\n", num);
    }

    return 0;
}
