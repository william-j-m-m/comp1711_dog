#include <stdio.h>

int main()
{
    int vector[5] = {11,13,17, 23 , 31};

    int* address = vector;

    printf ("\nAddress[0] = %d\n\n", *address);

    printf ("\nAddress[1] = %d\n\n", *address++);

    printf ("\nAddress[2] = %d\n\n", *++address);

    printf ("\n \n What is happening here?");

}