#include <stdio.h>

float maths(float a, float b, int c) {
    switch (c) {
        case 1:
            return a + b;
            break;
        case 2:
            return a - b;
            break;
        case 3:
            return a * b;
            break;
        case 4:
            return a / b;
            break;
        default:
            printf("Enter valid input");
            return -1;
            break;

    }

}

int main() {
    float num1;
    float num2;
    int choice;

    printf("Enter num1: ");
    scanf("%f", &num1);
    printf("Enter num2: ");
    scanf("%f", &num2);

    
    printf("Enter a number (1: Add, 2: Minus, 3: Multiply, 4: Divide): ");
    scanf("%d", &choice);


    printf("%f\n", maths(num1, num2, choice));

    
    return 0;
}