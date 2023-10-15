# include <stdio.h>

int main() {

    //declaring variables
    int a;
    int b;

    //assigning values to the variables
    printf("Enter a integer: ");
    scanf("%d", &a);
    printf("Enter an integer: ");
    scanf("%d", &b);
    
    //calucating the sum, then outputting
    int c = a + b;
    printf("Sum: %d\n", c);

    return 0;
}
