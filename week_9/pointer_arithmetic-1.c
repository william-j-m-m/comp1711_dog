#include <stdio.h>

int main()
{
    int vector[5] = {11,13,17, 23 , 31};

    int* address = vector;

    printf ("Address[0] = %d\n", *address);

    printf ("\nAddress[1] = %d\n", *(address+1));

    printf ("\nAddress[2] = %d\n", *(address+2));

    

}