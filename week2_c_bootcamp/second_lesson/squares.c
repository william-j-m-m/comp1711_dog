# include <stdio.h>

int main() {
    int a;
    int temp;

    for (a = 1; a <= 10; a++) {
        temp = a * a;
        printf("%d\n", temp);
    }
    return 0;
}