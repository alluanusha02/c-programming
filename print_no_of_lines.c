#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("example.txt", "r"); // Open file for reading

    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    int numLines, count = 0;
    printf("Enter the number of lines to print: ");
    scanf("%d", &numLines);

    char line[256];
    while (fgets(line, sizeof(line), file) && count < numLines) {
        printf("%s", line);
        count++;
    }

    fclose(file); // Close the file
    return 0;
}
