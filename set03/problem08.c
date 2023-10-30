#include <stdio.h>
#include <math.h>

typedef struct point {
    float x, y;
} Point;

typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

// Function to input the number of sides of the polygon
int input_n() {
    int n;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &n);
    return n;
}

// Function to input a point
Point input_point(char *prompt_msg) {
    Point p;
    printf("%s\n", prompt_msg);
    printf("Enter the x-coordinate: ");
    scanf("%f", &p.x);
    printf("Enter the y-coordinate: ");
    scanf("%f", &p.y);
    return p;
}

// Function to input a polygon
int input_polygon(Polygon *p) {
    p->sides = input_n();
    if (p->sides < 3 || p->sides > 100) {
        printf("Invalid number of sides. Please enter a value between 3 and 100.\n");
        return 0; // Return 0 to indicate input error
    }

    for (int i = 0; i < p->sides; i++) {
        char prompt_msg[50];
        sprintf(prompt_msg, "Enter coordinates of Point %d", i+1);
        p->p[i] = input_point(prompt_msg);
    }

    return 1; 

float find_distance(Point a, Point b) {
    return sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
}

void find_perimeter(Polygon *p) {
    float perimeter = 0;

    for (int i = 0; i < p->sides; i++) {
        perimeter += find_distance(p->p[i], p->p[(i+1)%p->sides]);
    }

    p->perimeter = perimeter;
}

void output(Polygon p) {
    printf("The perimeter of the polygon is %.2f units.\n", p.perimeter);
}


