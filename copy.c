#include <stdio.h>

int main() {
    char src[100], dest[100];
    int i = 0;

    printf("Enter a string to copy: ");
    gets(src);  // Use fgets(src, 100, stdin) for safer input

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';  // Null-terminate the destination string

    printf("Copied string: %s\n", dest);
    return 0;
}
