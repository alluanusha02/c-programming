#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);  // Use fgets(str, 100, stdin) for safer input

    printf("Upper case: ");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", toupper(str[i]));
    }

    printf("\nLower case: ");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", tolower(str[i]));
    }

    printf("\n");
    return 0;
}
