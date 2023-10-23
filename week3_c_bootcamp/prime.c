#include <stdio.h>
#include <stdbool.h>

int isPrime(int a) {
    int i;
    int factors = 0;
    
    for (i = 2; i <= a; i++) {
        if (a % i == 0) {
            factors++;
        }
    }
    if (factors == 1) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d\n", isPrime(num));
    return 0;
}