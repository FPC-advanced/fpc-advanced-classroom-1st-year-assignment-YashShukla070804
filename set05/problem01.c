#include <stdio.h>
#include <math.h>

struct _point {
    float x;
    float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main() {
    Point point1, point2;
    float result;

    point1 = input();
    point2 = input();

    dist(point1, point2, &result);

    output(point1, point2, result);

    return 0;
}

Point input() {
    Point p;
    printf("Enter the x-coordinate: ");
    scanf("%f", &p.x);

    printf("Enter the y-coordinate: ");
    scanf("%f", &p.y);

    return p;
}

void dist(Point a, Point b, float *res) {
    *res = sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
}

void output(Point a, Point b, float res) {
    printf("Distance between points (%.2f, %.2f) and (%.2f, %.2f) is: %.2f\n", a.x, a.y, b.x, b.y, res);
}
