#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    gets(str);  // Use fgets(str, 100, stdin) for safer input

    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string is %d\n", length);
    return 0;
}
