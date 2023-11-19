#include <stdio.h>
#include <math.h>

// Function to input camel details
void input_camel_details(float *radius, float *height, float *length) {
    printf("Enter the stomach radius of the camel: ");
    scanf("%f", radius);

    printf("Enter the height of the camel: ");
    scanf("%f", height);

    printf("Enter the length of the camel: ");
    scanf("%f", length);
}

// Function to calculate the weight of the camel
float find_weight(float radius, float height, float length) {
    const float pi = 3.14159265358979323846;
    return pi * pow(radius, 3) * sqrt(height * length);
}

// Function to output the result
void output(float radius, float height, float length, float weight) {
    printf("Camel Details:\n");
    printf("Stomach Radius: %.2f\n", radius);
    printf("Height: %.2f\n", height);
    printf("Length: %.2f\n", length);
    printf("Weight of the camel: %.2f\n", weight);
}

int main() {
    float stomach_radius, camel_height, camel_length, camel_weight;

    input_camel_details(&stomach_radius, &camel_height, &camel_length);

    camel_weight = find_weight(stomach_radius, camel_height, camel_length);

    output(stomach_radius, camel_height, camel_length, camel_weight);

    return 0;
}
