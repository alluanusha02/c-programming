#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("example.txt", "w"); // Create and open the file for writing

    if (file == NULL) {
        printf("Failed to create or open the file.\n");
        return 1;
    }

    printf("File created and opened successfully.\n");

    fclose(file); // Close the file
    printf("File closed successfully.\n");

    return 0;
}
