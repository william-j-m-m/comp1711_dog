#include <stdio.h>

int main() {
    float temp;
    printf("Enter a temperature: ");
    scanf("%f", &temp);

    if (temp >= -10 && temp <= 40) {
        printf("Valid Temperature\n");
    }
    else {
        printf("Out of range\n");
    }

    return 0;
}