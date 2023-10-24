#include "utils1.h"
FILE *open_file(char filename[], char mode[]){
    FILE *file = fopen(filename, "w");

    if (file == NULL) {
        perror("");
        exit(1);
    }
    return file 
}