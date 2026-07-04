Write a program to Sort names alphabetically.
#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20], temp[20];
    int n = 5;

    printf("Enter 5 names:\n");
    for (int i = 0; i < n; i++)
        scanf("%s", names[i]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Names in alphabetical order:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", names[i]);

    return 0;
}