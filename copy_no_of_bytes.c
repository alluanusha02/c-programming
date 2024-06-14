#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    sourceFile = fopen("source.txt", "r");
    destFile = fopen("destination.txt", "w");

    if (sourceFile == NULL || destFile == NULL) {
        printf("Failed to open source or destination file.\n");
        return 1;
    }

    int offset, numBytes;
    printf("Enter the offset: ");
    scanf("%d", &offset);
    printf("Enter the number of bytes to copy: ");
    scanf("%d", &numBytes);

    fseek(sourceFile, offset, SEEK_SET);
    char ch;
    while (numBytes > 0 && (ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
        numBytes--;
    }

    fclose(sourceFile);
    fclose(destFile);
    return 0;
}
