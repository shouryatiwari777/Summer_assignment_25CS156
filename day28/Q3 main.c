Write a program to Create ticket booking system.
#include <stdio.h>

int main() {
    int seats = 10, choice;

    while (1) {
        printf("\n1. Book Ticket\n2. Cancel Ticket\n3. Available Seats\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            if (seats > 0) {
                seats--;
                printf("Ticket Booked Successfully.\n");
            } else {
                printf("No Seats Available.\n");
            }
            break;

        case 2:
            seats++;
            printf("Ticket Cancelled.\n");
            break;

        case 3:
            printf("Available Seats = %d\n", seats);
            break;

        case 4:
            return 0;
        }
    }
}