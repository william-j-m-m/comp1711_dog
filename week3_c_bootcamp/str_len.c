#include <stdio.h>
#include <stdbool.h>

int str_len(char string[50]) {
    bool running = true;
    int counter = 0;
    while (running) {
        if (&string[counter] == "\0") {
            running = false;
        }
        else {
            counter += 1;
        }
    }
    return counter;
}

int main() {
    char inp_string[50];
    printf("Enter a string: ");
    scanf("%s", inp_string);
    printf("hello");

    int length = str_len(inp_string);
    printf("%d", length);

    return 0;
}