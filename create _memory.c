#include <stdio.h>
#include <stdlib.h>

int main() {
    int *intPtr = (int *)malloc(sizeof(int));
    char *charPtr = (char *)malloc(sizeof(char));
    float *floatPtr = (float *)malloc(sizeof(float));

    if (intPtr == NULL || charPtr == NULL || floatPtr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    *intPtr = 10;
    *charPtr = 'A';
    *floatPtr = 3.14;

    printf("Integer value: %d\n", *intPtr);
    printf("Character value: %c\n", *charPtr);
    printf("Float value: %.2f\n", *floatPtr);

    free(intPtr);
    free(charPtr);
    free(floatPtr);

    return 0;
}
