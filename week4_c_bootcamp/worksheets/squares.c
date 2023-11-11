# include <stdio.h>

int main() {
    int counter;
    printf("Enter an integer: "); 
    scanf("%d", &counter);

    FILE *file = fopen("squares.txt", "w");

    for (int i = 1; i <= counter; i++) {
        fprintf(file, "%d\n", i * i);
    }

    return 0;
}