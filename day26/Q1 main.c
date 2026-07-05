Write a program to Create number guessing game.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("=== Number Guessing Game ===\n");

    do {
        printf("Enter your guess (1-100): ");
        scanf("%d", &guess);

        if (guess < number)
            printf("Too Low!\n");
        else if (guess > number)
            printf("Too High!\n");
        else
            printf("Congratulations! You guessed the correct number.\n");

    } while (guess != number);

    return 0;
}