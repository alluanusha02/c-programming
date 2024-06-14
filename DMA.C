#include <stdio.h>
#include <stdlib.h>

int main() {
    char *text;
    int n;

    printf("Enter length of text: ");
    scanf("%d", &n);

    text = (char *)malloc((n + 1) * sizeof(char));

    if (text == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter text: ");
    scanf(" ");
    gets(text);

    printf("Entered text: %s\n", text);

    free(text);

    return 0;
}
