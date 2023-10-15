# include <stdio.h>

int main() {
    //declaring variables
    int array_1[5] = {10, 20, 30, 40, 45};
    int maximum = array_1[0];

    //iterating through the array, checking if any value is larger
    //note: don't need to check the first element as this is used as the starting value
    int i;
    for (i = 1; i <= 4; i++) {
        if (array_1[i] > maximum) {
            maximum = array_1[i];
        }
    }

    printf("The largest value is %d\n", maximum);

    return 0;
}
