Write a program to Create contact management system.
#include <stdio.h>
#include <string.h>

struct Contact {
    char name[30];
    char phone[15];
};

int main() {
    struct Contact c[100];
    int n = 0, choice, i;
    char search[30];

    while (1) {
        printf("\n1. Add Contact\n2. Search Contact\n3. Display Contacts\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter Name: ");
            scanf("%s", c[n].name);
            printf("Enter Phone: ");
            scanf("%s", c[n].phone);
            n++;
            printf("Contact Added.\n");
            break;

        case 2:
            printf("Enter Name: ");
            scanf("%s", search);
            for (i = 0; i < n; i++) {
                if (strcmp(search, c[i].name) == 0) {
                    printf("Phone: %s\n", c[i].phone);
                    break;
                }
            }
            if (i == n)
                printf("Contact Not Found.\n");
            break;

        case 3:
            printf("\nContact List\n");
            for (i = 0; i < n; i++)
                printf("%s - %s\n", c[i].name, c[i].phone);
            break;

        case 4:
            return 0;
        }
    }
}