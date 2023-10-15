# include <stdio.h>

int main() {
    //declaring variables
    int array_1[5] = {10, 20, 30, 40, 45};
    int array_2[5];

    //iterating through the array, adding this to the new array
    int i;
    for (i = 4; i >= 0; i--) {
        array_2[4 - i] = array_1[i];
    }

    //printing the new array
    for (i = 0; i <= 4; i++) {
        printf("%d\n", array_2[i]);
    }


}
