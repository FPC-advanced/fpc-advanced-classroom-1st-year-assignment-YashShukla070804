#include <stdio.h>

int main() {
    int size = input_size();

    int array[size];

    input_array(size, array);

    int largestIndex = find_largest_index(size, array);

    output(largestIndex);

    return 0;
}
int input_size() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    return size;
}

void input_array(int n, int a[n]) {
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

int find_largest_index(int n, int a[n]) {
    int largestIndex = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > a[largestIndex]) {
            largestIndex = i;
        }
    }

    return largestIndex;
}

void output(int index) {
    printf("The index of the largest number in the array is: %d\n", index);
}


