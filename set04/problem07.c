#include <stdio.h>

// Fraction structure definition
typedef struct {
    int num, den;
} Fraction;

// Function to input a fraction
Fraction input_fraction() {
    Fraction frac;
    printf("Enter the numerator: ");
    scanf("%d", &frac.num);

    printf("Enter the denominator: ");
    scanf("%d", &frac.den);

    return frac;
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

void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum) {
    printf("Fraction 1: %d/%d\n", f1.num, f1.den);
    printf("Fraction 2: %d/%d\n", f2.num, f2.den);
    printf("The sum of fractions is: %d/%d\n", sum.num, sum.den);
}


