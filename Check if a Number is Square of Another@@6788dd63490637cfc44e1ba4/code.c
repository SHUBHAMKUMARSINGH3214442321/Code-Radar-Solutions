#include <stdio.h>

int isPrime(int num) {
    // Handle edge cases for numbers less than 2
    if (num <= 1) {
        return 0; // Not prime
    }

    // Check divisibility from 2 to the square root of num
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int number;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
