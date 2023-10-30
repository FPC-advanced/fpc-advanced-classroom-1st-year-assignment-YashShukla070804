#include <stdio.h>

// Function to input a number
int input_number() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    return num;
}

// Function to check if a number is prime
int is_prime(int n) {
    if (n < 2)
        return 0; // Not a prime number

    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0)
            return 0; // Not a prime number
    }

    return 1; 
}

void output(int n, int result) {
    if (result)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
}


