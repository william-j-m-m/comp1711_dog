#include <stdio.h>

void transpose_matrix(int arr[2][3]) {
    int t_arr[3][2] = {0, 0, 0, 0, 0, 0};
    for (size_t i = 0; i < 2; i++) {
        for (size_t j = 0; j < 3; j++) {
            t_arr[j][i] = arr[i][j];
        }
    }
    for (size_t i = 0; i < 3; i++) {
        for (size_t j = 0; j < 2; j++) {
            printf("%d ", t_arr[i][j]);
        }
        printf("\n");
    }
}

int main () {
    int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("Original Array: \n");
    for (size_t i = 0; i < 2; i++) {
        for (size_t j = 0; j < 3; j++) {
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }
    printf("Transposed Array: \n");
    transpose_matrix(array1);

    return 0;
}