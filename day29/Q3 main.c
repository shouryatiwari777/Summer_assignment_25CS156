Write a program to Create menu-driven string operations system.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    do {
        printf("\n--- String Operations ---\n");
        printf("1. Length\n");
        printf("2. Copy\n");
        printf("3. Concatenate\n");
        printf("4. Compare\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(str2, str1);
                printf("Copied String = %s\n", str2);
                break;

            case 3:
                printf("Enter second string: ");
                scanf("%s", str2);

                strcat(str1, str2);
                printf("Concatenated String = %s\n", str1);
                break;

            case 4:
                printf("Enter second string: ");
                scanf("%s", str2);

                if (strcmp(str1, str2) == 0)
                    printf("Strings are Equal\n");
                else
                    printf("Strings are Not Equal\n");
                break;

            case 5:
                printf("Exit\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while (choice != 5);

    return 0;
}