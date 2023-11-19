#include <stdio.h>

// Function to input the size of the array
int input_size() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    return size;
}

// Function to input elements of the array
void input_array(int n, int a[n]) {
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

// Function to find the index of the largest number in the array
int find_largest_index(int n, int a[n]) {
    int largestIndex = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > a[largestIndex]) {
            largestIndex = i;
        }
    }

    return largestIndex;
}

// Function to output the result
void output(int index) {
    printf("The index of the largest number in the array is: %d\n", index);
}

int main() {
    int size = input_size();

    int array[size];

    input_array(size, array);

    int largestIndex = find_largest_index(size, array);

    output(largestIndex);

    return 0;
}
