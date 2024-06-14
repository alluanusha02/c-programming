#include <stdio.h>

int main() {
    int arr[5];
    int *ptr = arr;

    printf("Enter 5 elements: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements and their addresses:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d, Address: %p\n", i, *(ptr + i), (ptr + i));
    }

    return 0;
}
