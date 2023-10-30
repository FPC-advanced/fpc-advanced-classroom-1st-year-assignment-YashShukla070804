#include <stdio.h>
typedef struct _triangle {
  float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);
int main() {
    Triangle t = input_triangle();
    find_area(&t);
    output(t);
    return 0;
}

Triangle input_triangle() {
    Triangle t;
    printf("Enter the base and altitude of the triangle: ");
    scanf("%f %f", &t.base, &t.altitude);
    return t;
}

void find_area(Triangle *t) {
    t->area = (t->base * t->altitude) / 2;
}

void output(Triangle t) {
    printf("The area of the Triangle with , Base = %.2f\n , Altitude = %.2f\n and Area = %.2f\n", t.base,t.altitude,t.area);
    
}


