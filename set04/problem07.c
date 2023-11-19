#include <stdio.h>

// Fraction structure definition
typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction() {
    Fraction frac;
    printf("Enter the numerator: ");
    scanf("%d", &frac.num);

    printf("Enter the denominator: ");
    scanf("%d", &frac.den);

    return frac;
}

int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Fraction add_fractions(Fraction f1, Fraction f2) {
    Fraction sum;

    sum.den = f1.den * f2.den;

    sum.num = f1.num * f2.den + f2.num * f1.den;

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


