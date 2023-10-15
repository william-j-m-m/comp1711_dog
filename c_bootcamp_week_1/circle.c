# include <stdio.h>

int main() {

    int radius;
    //inputting the radius
    printf("Enter a radius: ");
    scanf("%d", &radius);

    //calculating the area, both in terms of pi and not
    float area = radius * radius;
    printf("Area: %fpi\n", area);
    area *= 3.14;
    printf("Area: %f\n", area);

    return 0;

}
