#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Space before %c to consume any whitespace

    switch(ch) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is a Vowel\n", ch);
            break;
        default:
            printf("%c is a Consonant\n", ch);
    }

    return 0;
}
