Write a program to Find common characters in strings.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Common characters: ");

    for (int i = 0; i < strlen(str1); i++) {
        for (int j = 0; j < strlen(str2); j++) {
            if (str1[i] == str2[j]) {
                printf("%c ", str1[i]);
                break;
            }
        }
    }

    return 0;
}