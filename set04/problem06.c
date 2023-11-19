#include <stdio.h>
#include <string.h>

// Function to input a string
void input_string(char *a) {
    printf("Enter a string: ");
    fgets(a, 1000, stdin); // Using fgets to allow spaces in the input
}

// Function to count the number of words in a string
int count_words(char *string) {
    char *token;
    int count = 0;

    // Using strtok to tokenize the string based on space and count the words
    token = strtok(string, " ");
    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }

    return count;
}

// Function to output the result
void output(char *string, int no_words) {
    printf("The string is: %s\n", string);
    printf("Number of words in the string: %d\n", no_words);
}


