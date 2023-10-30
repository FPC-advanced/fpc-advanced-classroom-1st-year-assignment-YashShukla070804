#include <stdio.h>
struct _complex {
  float real,imaginary;
};
typedef struct _complex Complex;
int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);
int main()
{
    int n = get_n();
    Complex c[n];
    input_n_complex(n, c);
    Complex result = add_n_complex(n, c);
    output(n, c, result);
    return 0;
}
int get_n()
{
    int n;
    printf("Enter the number of arrays: ");
    scanf("%d", &n);
    return n;
}
Complex input_complex()
{
    Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}
void input_n_complex(int n, Complex c[n])
{
    for(int i = 0; i < n; i++) 
    {
        printf("Enter complex number %d:\n", i+1);
        c[i] = input_complex();
    }
}
Complex add(Complex a, Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}
Complex add_n_complex(int n, Complex c[n])
{
    Complex sum = {0, 0};
    for(int i = 0; i < n; i++) 
    {
        sum = add(sum, c[i]);
    }
    return sum;
}
void output(int n, Complex c[n], Complex result)
{
    for(int i = 0; i < n-1; i++) 
    {
        printf("%.f+%.fi + ", c[i].real, c[i].imaginary);
    }   
    printf(" %.f + %.fi is %.f + %.fi \n",c[n-1].real, c[n-1].imaginary, result.real, result.imaginary);
}