# include <stdio.h>

int main() {
    //entering the value
    int inp_integer;
    printf("Enter an integer: ");
    scanf("%d", &inp_integer);

    //for loop, multiplying the number to do the factorial
    int i;
    int result = 1;
    for (i = inp_integer; i >= 1; i--) {
        result *= i;
    }

    //output
    printf("%d! is %d\n", inp_integer, result);
    return 0;

}
