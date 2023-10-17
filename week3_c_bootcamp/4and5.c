# include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 4 == 0 && num % 5 == 0) {
        printf("Divisible by both\n");
    }
    else if (num % 4 == 0) {
        printf("Divisible by 4\n");
    }
    else if (num % 5 == 0) {
        printf("Divisible by 5\n");
    }
    else {
        printf("Not divisible by either 4 or 5\n");
    }

    return 0;
}