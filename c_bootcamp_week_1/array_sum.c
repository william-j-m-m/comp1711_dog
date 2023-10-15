# include <stdio.h>

int main() {
    //declaring variables
    int array_1[5] = {10, 20, 30, 40, 45};
    int sum = 0;

    //iterating through the array, adding this to the total
    int i;
    for (i = 0; i <= 4; i++) {
        sum += array_1[i];
    }

    printf("The values in the array sum to %d\n", sum);


}
