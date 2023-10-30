#include <stdio.h>
#include <math.h>

void input(float *x1, float *y1, float *x2, float *y2) {
    printf("Enter the coordinates of Point 1 (x1 y1): ");
    scanf("%f %f", x1, y1);
    printf("Enter the coordinates of Point 2 (x2 y2): ");
    scanf("%f %f", x2, y2);
}

float find_distance(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void output(float x1, float y1, float x2, float y2, float distance) {
    printf("Distance between (%.2f, %.2f) and (%.2f, %.2f) is %.2f\n", x1, y1, x2, y2, distance);
}

int main() {
    float x1, y1, x2, y2, distance;

    input(&x1, &y1, &x2, &y2);

    // Calculate distance
    distance = find_distance(x1, y1, x2, y2);

    // Output result
    output(x1, y1, x2, y2, distance);

    return 0;
}
