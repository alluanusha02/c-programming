#include <stdio.h>

struct Student {
    char name[50];
    int id;
    float marks;
};

int main() {
    struct Student students[3] = {
        {"Alice", 101, 85.5},
        {"Bob", 102, 90.0},
        {"Charlie", 103, 78.0}
    };

    for(int i = 0; i < 3; i++) {
        printf("Student %d:\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("Marks: %.1f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}
