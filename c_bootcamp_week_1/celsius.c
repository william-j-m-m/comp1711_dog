# include <stdio.h>

int main() {
    //entering the value
    float fahrenheit; 
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);

    //performing the calculation required to convert 
    float celsius = fahrenheit - 32;
    celsius *= 5;
    celsius /= 9;

    printf("%fF is %fC\n", fahrenheit, celsius);

    return 0;

}
