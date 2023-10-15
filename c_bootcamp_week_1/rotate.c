# include <stdio.h>

int main() {
    //declaring variables
    int array_1[5] = {10, 20, 30, 40, 45};
    int array_2[5];

    //iterating through the array, adding each value
    int i;
    array_2[0] = array_1[4];
    for (i = 0; i <= 3; i++) {
        array_2[i + 1] = array_1[i];
    }

    //printing the new array
    for (i = 0; i <= 4; i++) {
        printf("%d\n", array_2[i]);
    }

    return 0;
}
