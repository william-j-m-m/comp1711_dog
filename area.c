# include <stdio.h>

int main() {
    int length;
    int width;

    printf("Enter length, width: ");
    scanf("%d %d", &length, &width);
    int area = length * width;

    printf("Area = %d\n", area);
    return 0;
}