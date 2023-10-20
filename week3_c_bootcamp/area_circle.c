#include <stdio.h>

float area(float rad) {
    float area = 3.14159 * rad * rad;
    return area;
}

int main() {
    float radius;
    printf("Please enter a radius: ");
    scanf("%f", &radius);

    float result = area(radius);
    printf("The area of the circle with a radius of %f has area %f\n", radius, result);

    return 0;
}

