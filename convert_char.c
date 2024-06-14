#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file, *tempFile;
    file = fopen("example.txt", "r"); // Open file for reading
    tempFile = fopen("temp.txt", "w"); // Temporary file for writing

    if (file == NULL || tempFile == NULL) {
        printf("Failed to open file or temporary file.\n");
        return 1;
    }

    char ch;
    while ((ch = getc(file)) != EOF) {
        putc(toupper(ch), tempFile);
    }

    fclose(file);
    fclose(tempFile);

    // Rename temporary file to original file
    remove("example.txt");
    rename("temp.txt", "example.txt");

    printf("All characters converted to upper case.\n");

    return 0;
}
