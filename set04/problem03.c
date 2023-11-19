#include <stdio.h>

// Function to input values for n and r
void input_n_and_r(int *n, int *r) {
    printf("Enter the value of n: ");
    scanf("%d", n);

    printf("Enter the value of r: ");
    scanf("%d", r);
}

// Function to calculate nCr
int nCr(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    } else {
        // Using recursive formula: nCr = (n-1)C(r-1) + (n-1)Cr
        return nCr(n - 1, r - 1) + nCr(n - 1, r);
    }
}

void output(int n, int r, int result) {
    printf("The value of C(%d, %d) is: %d\n", n, r, result);
}

