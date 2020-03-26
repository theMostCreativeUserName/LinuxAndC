#include <stdio.h>
#include <math.h>
#include "gd.h"


int main()
{
    double price, tip; // defines two variables at once
    price = get_double("Enter price: ", 0, 1000);
    tip = get_double("Enter tip amount (percent): ", 0, 100);

    double tipAmt = price * tip/100;
    double total = price + tipAmt;

    // %lf lest you read in a variable you name at the end
    // output would be: "Tip amount: " +tipAmt
    printf("Tip amount: %lf\n", tipAmt);
    printf("Total amount: %lf\n", total);

}
