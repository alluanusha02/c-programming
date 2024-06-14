#include <stdio.h>

int main() {
    int arr[100], n, num, i;
    int count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integer elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find occurrence: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    printf("%d occurs %d times in the array.\n", num, count);

    return 0;
}
