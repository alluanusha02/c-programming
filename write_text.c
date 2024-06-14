#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("example.txt", "w"); // Open file for writing

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    fprintf(file, "Hello, world!\nThis is a test file.\n"); // Write text to file
    fclose(file); // Close the file

    // Open the file for reading and print its contents
    file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file); // Close the file
    return 0;
}write_text.cwrite_text.cwrite_text.cwrite_text.c
