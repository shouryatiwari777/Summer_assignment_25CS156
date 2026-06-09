 write a program to print miltiplication table of a given number in c language 
#include <stdio.h>

int main() {
    int n;
    int sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}