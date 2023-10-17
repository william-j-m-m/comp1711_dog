#include <stdio.h>
#include <stdbool.h>

int main() {
    bool running = true;
    int num;

    while (running) {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num == -1) {
            running = false;
        }
        else if (num >= 0 && num <= 100) {
            printf("Valid ");
        }
        else {
            printf("Invalid Input ");
        }

    }

    return 0;
}