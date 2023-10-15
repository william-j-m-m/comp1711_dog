# include <stdio.h>

int main() {

    //will use double for the output to allow for large number of days
    int days;
    printf("Enter a number of days: ");
    scanf("%d", &days);

    //speed of light and converting the number of days to seconds
    float speed_of_light = 300000000;
    float seconds = days * 24* 3600;

    //calculating the distance
    double distance = speed_of_light * seconds;

    //output
    printf("Light would have travelled %fm\n", distance);

    return 0;

}
