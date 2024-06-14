#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;

    ptr = &num; // Assigning the address of num to ptr

    printf("Value of num: %d\n", num);
    printf("Value pointed by ptr: %d\n", *ptr);
    printf("Address of num: %p\n", &num);
    printf("Address stored in ptr: %p\n", ptr);

    return 0;
}
