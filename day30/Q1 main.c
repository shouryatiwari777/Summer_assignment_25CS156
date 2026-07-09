Write a program to Create student record system using arrays and strings.
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n = 0, choice, i, roll;

    do {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("Enter Roll No: ");
            scanf("%d", &s[n].roll);

            printf("Enter Name: ");
            scanf("%s", s[n].name);

            printf("Enter Marks: ");
            scanf("%f", &s[n].marks);

            n++;
            break;

        case 2:
            printf("\nRoll\tName\tMarks\n");
            for(i=0;i<n;i++) {
                printf("%d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
            }
            break;

        case 3:
            printf("Enter Roll No to Search: ");
            scanf("%d", &roll);

            for(i=0;i<n;i++) {
                if(s[i].roll==roll) {
                    printf("Roll : %d\n", s[i].roll);
                    printf("Name : %s\n", s[i].name);
                    printf("Marks: %.2f\n", s[i].marks);
                    break;
                }
            }

            if(i==n)
                printf("Student Not Found\n");

            break;

        case 4:
            printf("Thank You\n");
            break;

        default:
            printf("Invalid Choice\n");
        }

    } while(choice!=4);

    return 0;
}