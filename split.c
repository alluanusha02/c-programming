#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *word;

    printf("Enter a string: ");
    gets(str);  // Use fgets(str, 100, stdin) for safer input

    word = strtok(str, " ");
    while (word != NULL) {
        printf("%s\n", word);
        word = strtok(NULL, " ");
    }

    return 0;
}
