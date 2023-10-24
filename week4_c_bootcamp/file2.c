#include <stdio.h>
#include <stdlib.h>

FILE *open_file(char filename[], char mode[]) {
    FILE *file = fopen(filename, "w");

    if (file == NULL) {
        perror("");
        exit(1);
    }
    return file 
}

int main() {
    char filename[] = "data1.txt";
    FILE *file = fopen(filename, "w");

    if (file == NULL) {
        perror("");
        return 1;
    }

    int buffer_size = 100;
    char buffer[buffer_size];
    while(fgets(buffer, buffer_size, file) != NULL)
        printf("&s\n")


    fprintf(file, "Hello World!\n");
    fclose(file);
    return 0;
}   