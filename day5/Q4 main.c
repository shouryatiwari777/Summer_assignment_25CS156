Write a program to Find largest prime factor
#include <stdio.h>

int main() {
    long long n;
    int largestPrime = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            largestPrime = i;
            n = n / i;
        }
    }

    printf("Largest Prime Factor = %d", largestPrime);

    return 0;
}