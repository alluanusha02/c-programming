#include <stdio.h>

struct Student {
    char name[50];
    int id;
    float marks;
};

int main() {
    struct Student stud;
    struct Student *ptr = &stud;

    printf("Enter student details:\n");
    printf("Name: ");
    scanf("%s", ptr->name);
    printf("ID: ");
    scanf("%d", &ptr->id);
    printf("Marks: ");
    scanf("%f", &ptr->marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("ID: %d\n", ptr->id);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
