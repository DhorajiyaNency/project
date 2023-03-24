#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    int i;
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Is a prime number
}

// Function to check if a number is perfect
int isPerfect(int num) {
    int i, sum = 0;
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i; // Add the divisor to the sum
        }
    }
    if (sum == num) {
        return 1; // Is a perfect number
    } else {
        return 0; // Not a perfect number
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    if (isPerfect(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
