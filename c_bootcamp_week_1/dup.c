# include <stdio.h>

int main() {
    //declaring variables
    int array1[6] = {10, 20, 10, 5, 15, 5};
    int duplicates[6]; 
    int i;
    int j;
    int next_free = 0; 

    //nested loop to check all the elements afterwards for repeats
    for (i = 0; i <= 5; i++) {
       for (j = i + 1; j <= 5; j++) {
        if (array1[i] == array1[j]) {
            duplicates[next_free] = array1[i];
            next_free += 1;
            j = 5;
        }
       }
        }
    //output
    for (i = 0; i < next_free; i++) {
        printf("%d\n", duplicates[i]);
    }
    
    return 0;
}
