#include <stdio.h>

int main() {
    printf("ASCII Table:\n");
    printf("Char  Dec  Hex\n");
    for (int i = 0; i < 128; i++) {
        printf(" %c    %3d  %02X\n", i, i, i);
    }
    return 0;
}
