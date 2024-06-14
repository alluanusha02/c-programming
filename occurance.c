#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0;
    printf("Enter a string: ");
    gets(str);  // Use fgets(str, 100, stdin) for safer input

    printf("Enter a character to find its occurrence: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Character '%c' occurs %d times in the string.\n", ch, count);
    return 0;
}
