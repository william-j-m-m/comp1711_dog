# include <stdio.h>

int main() {
    //declaring the arrays
    int array1[3] = {1, 3, 5};
    int array2[3] = {2, 4, 6};
    int array3[6];

    //adding elements from the first array
    int i;
    for (i = 0; i <= 2; i++) {
        array3[i] = array1[i];
    }
    //and from the second array
    for (i = 3; i <= 5; i++) {
        array3[i] = array2[i-3];
    }
    //outputting the final array
    for (i = 0; i <= 5; i++) {
        printf("%d\n", array3[i]);
    }

    return 0;
}