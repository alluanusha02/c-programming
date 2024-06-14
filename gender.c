#include <stdio.h>

int main() {
    char gender;
    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);  // Space before %c to consume any whitespace

    switch(gender) {
        case 'M':
        case 'm':
            printf("Male\n");
            break;
        case 'F':
        case 'f':
            printf("Female\n");
            break;
        default:
            printf("Invalid gender!\n");
    }

    return 0;
}
