#include <stdio.h>
// functtion to input double.
// returns: inputted double
// for purpose of practicing c MakeFiles

double get_double(char *prompt, double min, double max)
{
    double input;

    do {
        printf("%s", prompt);
        scanf("%lf", &input);
        if (input < min) printf("Must be at least %lf\n: ", min);
        if(input > max) printf("Must be at most %lf\n: ", max);
    } while(input < min || input > max);

    return input;
}
