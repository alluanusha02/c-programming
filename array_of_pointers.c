#include <stdio.h>

int main() {
    const char *arr[] = {"Hello", "World", "Programming", "in", "C"};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array of pointers:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
