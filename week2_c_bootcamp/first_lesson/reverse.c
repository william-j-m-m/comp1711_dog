# include <stdio.h>

int main () {
    char name[] = "Martin";
    int i;
    for (i = 5; i >= 0; i = i - 1) {
        printf("%c", name[i]);
    }
    printf("\n");

    return 0;
}