# include <stdio.h>
#include <stdlib.h>
//number inputs

int main()
{
    double num1, num2, answ;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch(op){
        case '+':
            answ = num1 + num2;
            break;
        case '-':
            answ = num1-num2;
            break;
        case '/':
            answ = num1/num2;
            break;
        case '*':
            answ = num1*num2;
            break;
        default: printf("Invalid Operator");
    }

    printf("%f\n", answ);
    return 0;

}
