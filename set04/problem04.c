#include <stdio.h>
int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);
int main() {
    int degree = input_degree();

    float coefficients[degree + 1];

    input_coefficients(degree, coefficients);

    float x = input_x();

    float result = evaluate_polynomial(degree, coefficients, x);

    output(degree, coefficients, x, result);

    return 0;
}
int input_degree() {
    int degree;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);
    return degree;
}

void input_coefficients(int n, float a[n]) {
    printf("Enter the coefficients of the polynomial from highest degree to constant term:\n");
    for (int i = n; i >= 0; i--) {
        printf("Enter coefficient for x^%d: ", i);
        scanf("%f", &a[i]);
    }
}

float input_x() {
    float x;
    printf("Enter the value of x for evaluation: ");
    scanf("%f", &x);
    return x;
}

float evaluate_polynomial(int n, float a[n], float x) {
    float result = a[0]; 

    for (int i = 1; i <= n; i++) {
        result = result * x + a[i];
    }

    return result;
}

void output(int n, float a[n], float x, float result) {
    printf("The polynomial P(x) = ");
    
    for (int i = n; i > 0; i--) {
        printf("%.2fx^%d + ", a[i], i);
    }
    
    printf("%.2f\n", a[0]);
    
    printf("Evaluated at x = %.2f, the result is: %.2f\n", x, result);
}


