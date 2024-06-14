#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("example.txt", "r"); // Open file for reading

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    char ch;
    while ((ch = getc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file); // Close the file
    return 0;
}
