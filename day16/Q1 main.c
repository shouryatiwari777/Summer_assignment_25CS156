Write a program to Find missing number 
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = 5;
    int size = sizeof(arr) / sizeof(arr[0]);

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }

    printf("Missing Number = %d\n", expectedSum - actualSum);

    return 0;
}