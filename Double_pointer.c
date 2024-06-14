#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;
    int **doublePtr = &ptr;

    printf("Value of num: %d\n", num);
    printf("Value pointed by ptr: %d\n", *ptr);
    printf("Value pointed by doublePtr: %d\n", **doublePtr);

    return 0;
}
