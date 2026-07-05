Write a program to Create quiz application.
#include <stdio.h>
#include <string.h>

int main() {
    char answer[50];
    int score = 0;

    printf("===== Simple Quiz =====\n");

    printf("1. What is the capital of India?\n");
    scanf(" %[^\n]", answer);
    if (strcmp(answer, "New Delhi") == 0 || strcmp(answer, "new delhi") == 0)
        score++;

    printf("2. Which language is used for system programming?\n");
    scanf(" %[^\n]", answer);
    if (strcmp(answer, "C") == 0 || strcmp(answer, "c") == 0)
        score++;

    printf("3. What is 5 + 3?\n");
    scanf(" %[^\n]", answer);
    if (strcmp(answer, "8") == 0)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}