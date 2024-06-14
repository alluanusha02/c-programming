#include <stdio.h>

void toLowerCase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

void toUpperCase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  // Use fgets(str, 100, stdin) for safer input

    toUpperCase(str);
    printf("Upper case: %s\n", str);

    toLowerCase(str);
    printf("Lower case: %s\n", str);

    return 0;
}
