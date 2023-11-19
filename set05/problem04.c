#include <stdio.h>

// Function to input camel details
void input_camel_details(float *radius, float *height, float *length) {
    printf("Enter the stomach radius of the camel: ");
    scanf("%f", radius);

    printf("Enter the height of the camel: ");
    scanf("%f", height);

    printf("Enter the length of the camel: ");
    scanf("%f", length);
}

// Function to determine the mood of the camel
int find_mood(float radius, float height, float length) {
    if (radius < height && radius < length) {
        return 1; // Sick
    } else if (height < length && height < radius) {
        return 2; // Happy
    } else if (length < height && length < radius) {
        return 3; // Tense
    } else {
        return 0; // Default
    }
}

// Function to output the result
void output(float radius, float height, float length, int mood) {
    printf("Camel Details:\n");
    printf("Stomach Radius: %.2f\n", radius);
    printf("Height: %.2f\n", height);
    printf("Length: %.2f\n", length);

    if (mood == 1) {
        printf("The camel is sick.\n");
    } else if (mood == 2) {
        printf("The camel is happy.\n");
    } else if (mood == 3) {
        printf("The camel is tense.\n");
    } else {
        printf("Unable to determine the camel's mood.\n");
    }
}

int main() {
    float stomach_radius, camel_height, camel_length;
    int camel_mood;

    input_camel_details(&stomach_radius, &camel_height, &camel_length);

    camel_mood = find_mood(stomach_radius, camel_height, camel_length);

    output(stomach_radius, camel_height, camel_length, camel_mood);

    return 0;
}
