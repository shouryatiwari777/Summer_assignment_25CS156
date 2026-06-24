Write a program to Find maximum freqenucy element.
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 2, 1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxFreq = 0, maxElement;

    for (int i = 0; i < size; i++) {
        int count = 1;

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    printf("Maximum Frequency Element = %d\n", maxElement);
    printf("Frequency = %d\n", maxFreq);

    return 0;
}