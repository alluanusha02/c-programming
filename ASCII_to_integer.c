#include <stdio.h>

int myAtoi(char *str) {
    int res = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    for (; str[i] != '\0'; ++i) {
        res = res * 10 + str[i] - '0';
    }

    return sign * res;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int num = myAtoi(str);
    printf("Converted integer: %d\n", num);

    return 0;
}
