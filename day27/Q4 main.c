Write a program to Create marksheet generation system.#include <stdio.h>

int main() {
    char name[50];
    int roll;
    float m1, m2, m3, total, percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks of Subject 1: ");
    scanf("%f", &m1);

    printf("Enter Marks of Subject 2: ");
    scanf("%f", &m2);

    printf("Enter Marks of Subject 3: ");
    scanf("%f", &m3);

    total = m1 + m2 + m3;
    percentage = total / 3;

    printf("\n------ MARKSHEET ------\n");
    printf("Roll Number : %d\n", roll);
    printf("Name        : %s\n", name);
    printf("Subject 1   : %.2f\n", m1);
    printf("Subject 2   : %.2f\n", m2);
    printf("Subject 3   : %.2f\n", m3);
    printf("Total Marks : %.2f\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade : A+\n");
    else if (percentage >= 75)
        printf("Grade : A\n");
    else if (percentage >= 60)
        printf("Grade : B\n");
    else if (percentage >= 40)
        printf("Grade : C\n");
    else
        printf("Grade : Fail\n");

    return 0;
}