#include <stdio.h>

int main() {
    float temperature;
    printf("Please input the temperature (celsius): ");
    scanf("%f", &temperature);

    int minimum_temp = 20;

    if (temperature >= minimum_temp)
        printf("You don't need a jacket\n");
    else if (temperature > 10)
        printf("Wear a lighter jacket\n");
    else
        printf("Wear a jacket\n");

    return 0;
}