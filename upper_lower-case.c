#include <stdio.h>

int main() {
    printf("Uppercase alphabets:\n");
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c ", ch);
    }
    printf("\n");

    printf("Lowercase alphabets:\n");
    for (char ch = 'a'; ch <= 'z'; ch++) {
        printf("%c ", ch);
    }
    printf("\n");

    return 0;
}
