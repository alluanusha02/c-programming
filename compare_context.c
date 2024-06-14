#include <stdio.h>

int main() {
    FILE *file1, *file2;
    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");

    if (file1 == NULL || file2 == NULL) {
        printf("Failed to open one or both files.\n");
        return 1;
    }

    char ch1, ch2;
    int areEqual = 1;

    while ((ch1 = fgetc(file1)) != EOF && (ch2 = fgetc(file2)) != EOF) {
        if (ch1 != ch2) {
            areEqual = 0;
            break;
        }
    }

    if (areEqual && (fgetc(file1) == EOF) && (fgetc(file2) == EOF)) {
        printf("Files are equal.\n");
    } else {
        printf("Files are not equal.\n");
    }

    fclose(file1);
    fclose(file2);
    return 0;
}
