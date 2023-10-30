#include <stdio.h>
int main() {
    int n, fibo;

    n = input();

    // Find the nth Fibonacci number
    fibo = find_fibo(n);

    // Output the result
    output(n, fibo);

    return 0;
}
// Function to input the value of n
int input() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}

// Function to find the nth Fibonacci number
int find_fibo(int n) {
    if (n <= 1)
        return n;
    
    int a = 0, b = 1, fibo;
    for (int i = 2; i <= n; i++) {
        fibo = a + b;
        a = b;
        b = fibo;
    }
    return fibo;
}

// Function to output the result
void output(int n, int fibo) {
    printf("The %dth Fibonacci number is: %d\n", n, fibo);
}


