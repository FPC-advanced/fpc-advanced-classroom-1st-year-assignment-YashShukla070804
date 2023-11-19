#include <stdio.h>

typedef struct fraction {
    int num, den;
} Fraction;

// Function to input the value of n
int input_n() {
    int n;
    printf("Enter the number of fractions (n): ");
    scanf("%d", &n);
    return n;
}

// Function to input a fraction
Fraction input_fraction() {
    Fraction frac;
    printf("Enter the numerator: ");
    scanf("%d", &frac.num);

    printf("Enter the denominator: ");
    scanf("%d", &frac.den);

    return frac;
}

// Function to input n fractions
void input_n_fractions(int n, Fraction f[n]) {
    for (int i = 0; i < n; i++) {
        printf("Enter Fraction %d:\n", i + 1);
        f[i] = input_fraction();
    }
}

// Function to find the greatest common divisor (GCD) of two numbers
int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to add two fractions
Fraction add_fractions(Fraction f1, Fraction f2) {
    Fraction sum;

    // Cross-multiply to find a common denominator
    sum.den = f1.den * f2.den;

    // Add the numerators
    sum.num = f1.num * f2.den + f2.num * f1.den;

    // Simplify the result by dividing numerator and denominator by their GCD
    int gcd = find_gcd(sum.num, sum.den);
    sum.num /= gcd;
    sum.den /= gcd;

    return sum;
}

Fraction add_n_fractions(int n, Fraction f[n]) {
    Fraction sum = f[0];

    for (int i = 1; i < n; i++) {
        sum = add_fractions(sum, f[i]);
    }

    return sum;
}

void output(int n, Fraction f[n], Fraction sum) {
    printf("Entered Fractions:\n");
    for (int i = 0; i < n; i++) {
        printf("Fraction %d: %d/%d\n", i + 1, f[i].num, f[i].den);
    }

    printf("The sum of fractions is: %d/%d\n", sum.num, sum.den);
}

int main() {
    int n = input_n();

    Fraction fractions[n];
    input_n_fractions(n, fractions);

    Fraction sum = add_n_fractions(n, fractions);

    output(n, fractions, sum);

    return 0;
}
