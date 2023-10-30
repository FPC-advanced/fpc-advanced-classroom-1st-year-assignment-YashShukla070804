#include <stdio.h>
#include <string.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);


int main() {
    char string[100], substring[100];
    int index;

    input_string(string, substring);

    index = sub_str_index(string, substring);

    output(string, substring, index);

    return 0;
}
void input_string(char* a, char* b) {
    printf("Enter the main string: ");
    scanf("%s", a);
    printf("Enter the substring: ");
    scanf("%s", b);
}

int sub_str_index(char* string, char* substring) {
    int len_string = strlen(string);
    int len_substring = strlen(substring);

    for (int i = 0; i <= len_string - len_substring; i++) {
        int j;
        for (j = 0; j < len_substring; j++) {
            if (string[i + j] != substring[j])
                break;
        }
        if (j == len_substring)
            return i;
    }

    return -1; }


void output(char* string, char* substring, int index) {
    if (index != -1)
        printf("The substring '%s' is found at index %d in the string '%s'.\n", substring, index, string);
    else
        printf("The substring '%s' is not found in the string '%s'.\n", substring, string);
}


