#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int digits = 0, spaces = 0, special = 0, alphabets = 0;

    printf("Enter a string: ");
    gets(str);  // Use fgets(str, 100, stdin) for safer input

    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            digits++;
        } else if (isspace(str[i])) {
            spaces++;
        } else if (isalpha(str[i])) {
            alphabets++;
        } else {
            special++;
        }
    }

    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf
