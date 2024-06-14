#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int id;
    float marks;
};

int main() {
    struct Student *stud;

    stud = (struct Student *)malloc(sizeof(struct Student));

    if (stud == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter student details:\n");
    printf("Name: ");
    scanf("%s", stud->name);
    printf("ID: ");
    scanf("%d", &stud->id);
    printf("Marks: ");
    scanf("%f", &stud->marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", stud->name);
    printf("ID: %d\n", stud->id);
    printf("Marks: %.2f\n", stud->marks);

    free(stud);

    return 0;
}
