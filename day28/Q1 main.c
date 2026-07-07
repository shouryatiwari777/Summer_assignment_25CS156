Write a program to Create library management system.
#include <stdio.h>
#include <string.h>

int main() {
    char books[5][30] = {"Python", "Java", "C++", "C", "DBMS"};
    int issued[5] = {0};
    int choice, i;
    char name[30];

    while (1) {
        printf("\n1. Display Books\n2. Issue Book\n3. Return Book\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("\nAvailable Books:\n");
            for (i = 0; i < 5; i++)
                if (issued[i] == 0)
                    printf("%s\n", books[i]);
            break;

        case 2:
            printf("Enter book name: ");
            scanf("%s", name);
            for (i = 0; i < 5; i++) {
                if (strcmp(name, books[i]) == 0 && issued[i] == 0) {
                    issued[i] = 1;
                    printf("Book Issued Successfully.\n");
                    break;
                }
            }
            break;

        case 3:
            printf("Enter book name: ");
            scanf("%s", name);
            for (i = 0; i < 5; i++) {
                if (strcmp(name, books[i]) == 0) {
                    issued[i] = 0;
                    printf("Book Returned Successfully.\n");
                    break;
                }
            }
            break;

        case 4:
            return 0;
        }
    }
}