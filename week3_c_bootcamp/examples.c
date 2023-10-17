#include <stdio.h>

int main() {
    int distinction = 70;
    int pass = 50;
    int user_mark;

    printf("Enter a mark: ");
    scanf("%d", &user_mark);

    if (user_mark >= distinction) {
        printf("Distinction\n");
    }
    else if (user_mark >= pass) {
        printf("Pass\n");
    }
    else {
        printf("Fail\n");
    }
}