#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    file = fopen("example.txt", "r"); // Open file for reading

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    fseek(file, 0, SEEK_END); // Move to the end of the file
    long fileSize = ftell(file); // Get the size of the file
    char *content = malloc(fileSize + 1);

    if (content == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    fseek(file, 0, SEEK_SET); // Move to the beginning of the file
    fread(content, 1, fileSize, file); // Read the file into the buffer
    fclose(file); // Close the file

    for (long i = fileSize - 1; i >= 0; i--) {
        putchar(content[i]);
    }

    free(content); // Free allocated memory
    return 0;
}
