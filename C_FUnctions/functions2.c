#include <stdio.h>

double sum (int a, float b)
{
    int answer;
    answer = a + b;
    return answer;
}

int main () 
{
    float y = 2;
    double z = sum(5, y); // calling our new function

    printf ("The sum of 5 and %f is %f\n", y, z);
}