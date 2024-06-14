#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  // Use fgets(str, 100, stdin) for safer input

    int length = stringLength(str);

    printf("Length of the string: %d\n", length);

    return 0;
}
