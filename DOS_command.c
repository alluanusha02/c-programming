#include <stdio.h>
#include <stdlib.h>

int main() {
    char command[256];
    printf("Enter a DOS command: ");
    gets(command);

    system(command);

    return 0;
}
