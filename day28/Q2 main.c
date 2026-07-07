Write a program to Create bank account system.
#include <stdio.h>

int main() {
    float balance = 0, amount;
    int choice;

    while (1) {
        printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter amount: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Amount Deposited.\n");
            break;

        case 2:
            printf("Enter amount: ");
            scanf("%f", &amount);
            if (amount <= balance) {
                balance -= amount;
                printf("Amount Withdrawn.\n");
            } else {
                printf("Insufficient Balance.\n");
            }
            break;

        case 3:
            printf("Current Balance = %.2f\n", balance);
            break;

        case 4:
            return 0;
        }
    }
}