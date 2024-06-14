#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);  // Use fgets(str, 100, stdin) for safer input

    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }
    return 0;
}
