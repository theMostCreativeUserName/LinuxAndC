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

    if(op == '+'){
        answ = num1 + num2;
    }else if(op == '-'){
        answ = num1-num2;
    }else if(op == '/'){
        answ = num1/num2;
    }else if(op == '*'){
        answ = num1*num2;
    }else{
        printf("Invalid Operator\n");
    }
    printf("%f\n", answ);
    //printf("%f %c %f = %f", num1,op, num2 , answ);
    return 0;

}
