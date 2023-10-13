# include <stdio.h>
# include <string.h>

int main() {
    char my_str[5] = "Hello";

    int str_len = strlen(my_str);
    int a;

    for (a = str_len; a >= 0; a--) {
        printf("%c\n", my_str[a]);
    }
    

    return 0;
}