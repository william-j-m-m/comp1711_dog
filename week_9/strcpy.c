#include <stdio.h>
#include <stdlib.h>

int main() {
    // entering a string
    char inp[100];
    printf("Enter a string: ");
    scanf("%s", inp);

    int length = 0;
    
    // calculating the length of the string
    for (int n = 0; n < 100; n++) {
        if (inp[n] == '\000') {
            length = n;
            break;
        }
    } 

    // dynamically allocating the new array, with increased length
    char* new_string = (char *) malloc (sizeof(*new_string)*(length + 1));

    // iterating through the old string, copying over each character
    for (int n = 0; n < length; n++) {
        new_string[n] = inp[n];
    }
    // outputting the new string
    printf("%s\n", new_string);

    // freeing the memory
    free(new_string);

    return 0;
}