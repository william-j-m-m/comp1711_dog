# include <stdio.h>

int main() {
    //defining the inital variables
    int a = 5;
    int b = 10;

    //showing the original values, then swapping using a temporary variable
    printf("A = %d, B = %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;

    //outputting the values
    printf("A = %d, B = %d\n", a, b);

    return 0;

}
