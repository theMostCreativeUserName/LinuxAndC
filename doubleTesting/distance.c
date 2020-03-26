#include <stdio.h>
#include <math.h>

double get_double(char *prompt, double min, double max);

int main()
{
    double x = get_double("Enter x value: ", -100, 100);
    double y = get_double("Enter x value: ", -100, 100);

    double d = sqrt(pow(x,2) + pow(y, 2));

    printf("Distance is %lf meters\n", d);
}
