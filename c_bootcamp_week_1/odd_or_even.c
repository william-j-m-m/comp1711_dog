# include <stdio.h>

int main() {
    //inputting the value
    int unknown_int;
    printf("Enter an integer: ");
    scanf("%d", &unknown_int);

    //using mod (remainder) to see if it is odd or even
    int test = unknown_int % 2;

    //if the result of the mod operation was 0, then it was even
    if (test == 0) {
        printf("%d is even\n", unknown_int);
    } else {
        printf("%d is odd\n", unknown_int);
    }


    return 0;

}
