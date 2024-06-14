#include <stdio.h>

int stringLength(char *str) {
    if (*str == '\0') {
        return 0;
    } else {
        return 1 + stringLength(str + 1);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);  // Use fgets(str, 100, stdin) for safer input

    printf("Length of the string is %d\n", stringLength(str));
    return 0;
}
