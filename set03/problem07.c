#include <stdio.h>
#include <math.h>
int main() {
    Line l;

    // Input line
    l = input_line();

    // Calculate length
    find_length(&l);

    // Output result
    output(l);

    return 0;
}
typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

// Function to input a point
Point input_point() {
    Point p;
    printf("Enter the x-coordinate: ");
    scanf("%f", &p.x);
    printf("Enter the y-coordinate: ");
    scanf("%f", &p.y);
    return p;
}

// Function to input a line
Line input_line() {
    Line l;
    printf("Enter the coordinates of Point 1:\n");
    l.p1 = input_point();
    printf("Enter the coordinates of Point 2:\n");
    l.p2 = input_point();
    return l;
}

// Function to calculate the distance (length) of a line
void find_length(Line *l) {
    l->distance = sqrt(pow((l->p2.x - l->p1.x), 2) + pow((l->p2.y - l->p1.y), 2));
}

// Function to output the result
void output(Line l) {
    printf("Length of the line between (%.2f, %.2f) and (%.2f, %.2f) is %.2f units.\n",
           l.p1.x, l.p1.y, l.p2.x, l.p2.y, l.distance);
}


