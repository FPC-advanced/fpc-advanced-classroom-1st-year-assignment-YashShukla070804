#include <stdio.h>
#include <string.h>

void input_string(char *a) {
    printf("Enter a string: ");
    fgets(a, 1000, stdin);
}

int count_words(char *string) {
    char *token;
    int count = 0;

    token = strtok(string, " ");
    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }

    return count;
}

void output(char *string, int no_words) {
    printf("The string is: %s\n", string);
    printf("Number of words in the string: %d\n", no_words);
}


