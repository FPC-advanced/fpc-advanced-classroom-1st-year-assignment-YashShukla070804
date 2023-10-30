#include <stdio.h>
int main() {
    int n;

    n = input_array_size();

    int a[n+1];

    init_array(n, a);

    eratosthenes_sieve(n, a);

    output(n, a);

    return 0;
}
// Function to input the array size (n)
int input_array_size() {
    int n;
    printf("Enter the upper limit (n): ");
    scanf("%d", &n);
    return n;
}

// Function to initialize the array with 1 (true)
void init_array(int n, int a[n]) {
    for (int i = 2; i <= n; i++) {
        a[i] = 1; // Set all elements to 1 initially (true)
    }
}

// Function to apply Eratosthenes Sieve method
void eratosthenes_sieve(int n, int a[n]) {
    for (int i = 2; i * i <= n; i++) {
        if (a[i] == 1) {
            for (int j = i * i; j <= n; j += i) {
                a[j] = 0; // Mark multiples of i as composite (false)
            }
        }
    }
}

// Function to output the prime numbers
void output(int n, int a[n]) {
    printf("Prime numbers between 2 and %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (a[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}


