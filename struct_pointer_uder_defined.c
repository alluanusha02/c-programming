#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

void printEmployeeDetails(struct Employee *empPtr) {
    printf("Employee Details:\n");
    printf("Name: %s\n", empPtr->name);
    printf("ID: %d\n", empPtr->id);
    printf("Salary: %.2f\n", empPtr->salary);
}

int main() {
    struct Employee emp = {"John Doe", 1001, 75000.00};
    printEmployeeDetails(&emp);

    return 0;
}
