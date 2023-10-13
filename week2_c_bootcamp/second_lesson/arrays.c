# include <stdio.h>

int main() {
    int array_size = 10;
    int array [array_size];

    int i;
    for (i = 0; i < array_size ; i++) {
        array[i] = 10 * i + i;
    }

    for (i = 0; i < array_size; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}