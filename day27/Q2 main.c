Write a program to Create employee management system.
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};

int main() {
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Department: ");
    scanf("%s", e.department);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("\n--- Employee Details ---\n");
    printf("ID         : %d\n", e.id);
    printf("Name       : %s\n", e.name);
    printf("Department : %s\n", e.department);
    printf("Salary     : %.2f\n", e.salary);

    return 0;
}