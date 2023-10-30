#include <stdio.h>
int main() {
    float x1, y1, x2, y2, x3, y3;
    int result;

    // Input coordinates
    input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);

    // Check if points form a triangle
    result = is_triangle(x1, y1, x2, y2, x3, y3);

    // Output result
    output(x1, y1, x2, y2, x3, y3, result);

    return 0;
}
// Function to input coordinates
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3) {
    printf("Enter the coordinates of Point 1 (x1 y1): ");
    scanf("%f %f", x1, y1);
    printf("Enter the coordinates of Point 2 (x2 y2): ");
    scanf("%f %f", x2, y2);
    printf("Enter the coordinates of Point 3 (x3 y3): ");
    scanf("%f %f", x3, y3);
}

// Function to check if the points form a triangle
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3) {
    // Three points form a triangle if the area enclosed by them is non-zero
    float area = 0.5 * ((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2)));
    return (area != 0);
}

// Function to output the result
void output(float x1, float y1, float x2, float y2, float x3, float y3, int result) {
    if (result)
        printf("The points (%.2f, %.2f), (%.2f, %.2f), and (%.2f, %.2f) form a triangle.\n", x1, y1, x2, y2, x3, y3);
    else
        printf("The points (%.2f, %.2f), (%.2f, %.2f), and (%.2f, %.2f) do not form a triangle.\n", x1, y1, x2, y2, x3, y3);
}


