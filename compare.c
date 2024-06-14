#include <stdio.h>

int compareCaseSensitive(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;  // Strings are not equal
        }
        i++;
    }
    return (str1[i] == '\0' && str2[i] == '\0');  // Both strings are equal if both ended
}

int compareIgnoreCase(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        char ch1 = (str1[i] >= 'A' && str1[i] <= 'Z') ? str1[i] + 32 : str1[i];
        char ch2 = (str2[i] >= 'A' && str2[i] <= 'Z') ? str2[i] + 32 : str2[i];
        if (ch1 != ch2) {
            return 0;  // Strings are not equal
        }
        i++;
    }
    return (str1[i] == '\0' && str2[i] == '\0');  // Both strings are equal if both ended
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);  // Use fgets(str1, 100, stdin) for safer input

    printf("Enter second string: ");
    gets(str2);  // Use fgets(str2, 100, stdin) for safer input

    if (compareCaseSensitive(str1, str2)) {
        printf("Strings are equal (case sensitive)\n");
    } else {
        printf("Strings are not equal (case sensitive)\n");
    }

    if (compareIgnoreCase(str1, str2)) {
        printf("Strings are equal (case insensitive)\n");
    } else {
        printf("Strings are not equal (case insensitive)\n");
    }

    return 0;
}
