#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("squares.txt", "r");

    float total = 0;
    int num_values = 0;
    int buffer_size = 50;
    char buffer[buffer_size];
    while (fgets(buffer, buffer_size, file) != NULL) {
        total += atof(buffer);
        num_values++;
    }
    fclose(file);

    float mean = total / num_values;
    printf("Average: %f\n", mean);
    return 0;
}