#include <stdio.h>

float volume(float rad) {
    float vol = 4 * 3.14159 * rad * rad * rad;
    vol /= 3;
    return vol;
}

int main() {
    printf("Enter radius: ");
    float radius;
    scanf("%f", &radius);
    float result = volume(radius);
    printf("The volume is %f\n", result);
    
    return 0;
}