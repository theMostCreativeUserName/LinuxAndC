# include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    //Arrays
    char name[20];
    int luckyNumbers[] = {4,7,9,13,16};
    printf("Enter your Age: \n");
    scanf("%d\n", &age);

    printf("Enter your Name: \n");
    scanf("%s\n", name);

    printf("Your name: %s Your age: %d\n",name, age );

    return 0;
}
