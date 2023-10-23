#include <stdio.h>
#include <stdbool.h>

int str_len(char string[50]) {
    bool running = true;
    int counter = 0;
    while (running) {
        if (string[counter] == '\0') {
            running = false;
        }
        else {
            counter += 1;
        }
    }
    return counter;
}

const char* concat_Strings(char string1[20], char string2[20]) {
    char string3[40];
    int i = 0;
    for (i = 0; i <= str_len(string1); i++) {
        string3[i] = string1[i];
    }
    return string3;
}

int main() {
    char a[20] = "hi";
    char b[20] = "hi2";
    printf("%s\n", concat_Strings(a, b));
}