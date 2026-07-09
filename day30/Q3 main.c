Write a program to Create mini employee management system.
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n=0, choice, id, i;

    do {
        printf("\n--- Employee Management ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice) {

        case 1:
            printf("Enter ID: ");
            scanf("%d",&emp[n].id);

            printf("Enter Name: ");
            scanf("%s",emp[n].name);

            printf("Enter Salary: ");
            scanf("%f",&emp[n].salary);

            n++;
            break;

        case 2:
            printf("\nID\tName\tSalary\n");

            for(i=0;i<n;i++) {
                printf("%d\t%s\t%.2f\n",
                emp[i].id,emp[i].name,emp[i].salary);
            }

            break;

        case 3:
            printf("Enter Employee ID: ");
            scanf("%d",&id);

            for(i=0;i<n;i++) {
                if(emp[i].id==id) {
                    printf("ID: %d\n",emp[i].id);
                    printf("Name: %s\n",emp[i].name);
                    printf("Salary: %.2f\n",emp[i].salary);
                    break;
                }
            }

            if(i==n)
                printf("Employee Not Found\n");

            break;

        case 4:
            printf("Exit\n");
            break;

        default:
            printf("Invalid Choice\n");
        }

    } while(choice!=4);

    return 0;
}