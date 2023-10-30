#include <stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);
int main() {
    int n, fibo;

    n = input();

    fibo = find_fibo(n);

    output(n, fibo);

    return 0;
}
int input() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}

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

void output(int n, int fibo) {
    printf("The %dth Fibonacci number is: %d\n", n, fibo);
}


