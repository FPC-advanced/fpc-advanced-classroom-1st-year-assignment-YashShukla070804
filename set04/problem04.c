#include <stdio.h>
int main() {
    int degree = input_degree();

    float coefficients[degree + 1];

    input_coefficients(degree, coefficients);

    float x = input_x();

    float result = evaluate_polynomial(degree, coefficients, x);

    output(degree, coefficients, x, result);

    return 0;
}
int main() {
    int degree = input_degree();

    float coefficients[degree + 1];

    input_coefficients(degree, coefficients);

    float x = input_x();

    float result = evaluate_polynomial(degree, coefficients, x);

    output(degree, coefficients, x, result);

    return 0;
}
// Function to input the degree of the polynomial
int input_degree() {
    int degree;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);
    return degree;
}

// Function to input coefficients of the polynomial
void input_coefficients(int n, float a[n]) {
    printf("Enter the coefficients of the polynomial from highest degree to constant term:\n");
    for (int i = n; i >= 0; i--) {
        printf("Enter coefficient for x^%d: ", i);
        scanf("%f", &a[i]);
    }
}

// Function to input the value of x
float input_x() {
    float x;
    printf("Enter the value of x for evaluation: ");
    scanf("%f", &x);
    return x;
}

// Function to evaluate the polynomial using Horner's Method
float evaluate_polynomial(int n, float a[n], float x) {
    float result = a[0]; // Initialize result with the constant term

    // Horner's Method: P(x) = a[0] + x(a[1] + x(a[2] + ... + x(a[n-1] + x*a[n])...))
    for (int i = 1; i <= n; i++) {
        result = result * x + a[i];
    }

    return result;
}

// Function to output the result
void output(int n, float a[n], float x, float result) {
    printf("The polynomial P(x) = ");
    
    for (int i = n; i > 0; i--) {
        printf("%.2fx^%d + ", a[i], i);
    }
    
    printf("%.2f\n", a[0]);
    
    printf("Evaluated at x = %.2f, the result is: %.2f\n", x, result);
}


