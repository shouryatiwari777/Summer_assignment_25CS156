Write a program to Develop complete mini project using arrays, strings and functions.
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int n = 0;

void addStudent() {
    printf("Enter Roll No: ");
    scanf("%d",&s[n].roll);

    printf("Enter Name: ");
    scanf("%s",s[n].name);

    printf("Enter Marks: ");
    scanf("%f",&s[n].marks);

    n++;
}

void displayStudents() {
    int i;

    printf("\nRoll\tName\tMarks\n");

    for(i=0;i<n;i++) {
        printf("%d\t%s\t%.2f\n",
        s[i].roll,s[i].name,s[i].marks);
    }
}

void searchStudent() {
    int roll,i;

    printf("Enter Roll No: ");
    scanf("%d",&roll);

    for(i=0;i<n;i++) {
        if(s[i].roll==roll) {
            printf("Roll : %d\n",s[i].roll);
            printf("Name : %s\n",s[i].name);
            printf("Marks: %.2f\n",s[i].marks);
            return;
        }
    }

    printf("Student Not Found\n");
}

int main() {
    int choice;

    do {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice!=4);

    return 0;
}