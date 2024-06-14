#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int upper = 0, lower = 0;

    printf("Enter a string: ");
    gets(str);  // Use fgets(str, 100, stdin) for safer input

    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            upper++;
        } else if (islower(str[i])) {
            lower++;
        }
    }

    printf("Upper case letters: %d\n", upper);
    printf("Lower case letters: %d\n", lower);

    return 0;
}
