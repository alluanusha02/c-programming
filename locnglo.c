#include <stdio.h>

int globalVar = 5; // Global variable

void display() {
    int localVar = 10; // Local variable
    printf("Local variable: %d\n", localVar);
}

int main() {
    printf("Global variable: %d\n", globalVar);
    display();
    return 0;
}
