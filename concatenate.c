#include <stdio.h>

void concatenate(char *dest, char *src) {
    int i = 0, j = 0;

    // Find the end of the destination string
    while (dest[i] != '\0') {
        i++;
    }

    // Copy source string to destination string
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';  // Null-terminate the destination string
}

int main() {
    char str1[200], str2[100];

    printf("Enter first string: ");
    gets(str1);  // Use fgets(str1, 200, stdin) for safer input

    printf("Enter second string: ");
    gets(str2);  // Use fgets(str2, 100, stdin) for safer input

    concatenate(str1, str2);

    printf("Concatenated string: %s\n", str1);
    return 0;
}
