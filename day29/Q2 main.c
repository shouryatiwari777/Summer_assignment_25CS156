Write a program to Create menu-driven array operations system.
#include <stdio.h>

int main() {
    int arr[100], n, i, choice, pos, value;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do {
        printf("\n--- Array Operations ---\n");
        printf("1. Display\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Search\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Array: ");
                for (i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 2:
                printf("Enter position and value: ");
                scanf("%d%d", &pos, &value);

                if (pos >= 1 && pos <= n + 1) {
                    for (i = n; i >= pos; i--)
                        arr[i] = arr[i - 1];

                    arr[pos - 1] = value;
                    n++;
                } else {
                    printf("Invalid Position\n");
                }
                break;

            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &pos);

                if (pos >= 1 && pos <= n) {
                    for (i = pos - 1; i < n - 1; i++)
                        arr[i] = arr[i + 1];

                    n--;
                } else {
                    printf("Invalid Position\n");
                }
                break;

            case 4:
                printf("Enter value to search: ");
                scanf("%d", &value);

                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        printf("Found at position %d\n", i + 1);
                        break;
                    }
                }

                if (i == n)
                    printf("Not Found\n");

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