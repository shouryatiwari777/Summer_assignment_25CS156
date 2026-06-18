Write a program to Print character pyramid.
      A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print ascending characters
        for (int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }

        // Print descending characters
        for (int j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}