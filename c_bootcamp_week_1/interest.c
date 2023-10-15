# include <stdio.h>

int main() {
    //declaring variables
    int principal;
    float rate;
    int time;

    //inputting variables
    printf("Enter Principal, Rate, Time (years): ");
    scanf("%d %f %d", &principal, &rate, & time);

    //calculating interest
    float interest = principal * (rate / 100) * time;

    printf("You will receive £%f interest\n", interest);

    return 0;

}
