#include <stdio.h>

int main() {
    int a = 2;
    //if a switch doesn't have a default case, and the thing you are testing doesn't match a variable,
    //then nothing will happen
    switch(a) {
        case 5: {
            printf("5");
            break;
        }
        case 2: {
            printf("2");
            break;
        }
        default: {
            printf("Not 5 or 2");
        }
    }

    return 0;
}