#include <stdio.h>

int main(){

    char operators;
    printf("Choose an operator ['+', '-', '/', '*'] ");
    scanf("%c", &operators);

    double firstNumber, secondNumber;

    printf("input first number: ");
    scanf("%lf", &firstNumber);

    printf("input a second number: ");
    scanf("%lf", &secondNumber);

    double result;

    switch (operators)
    {
    case '+':
        result = firstNumber + secondNumber;
        printf("%.2lf", result);
        break;

    case '-':
        result = firstNumber - secondNumber;
        printf("%.2lf", result);
        break;

    case '*':
        result = firstNumber * secondNumber;
        printf("%.2lf", result);
        break;

    case '/':
        result = firstNumber / secondNumber;
        printf("%.2lf", result);
        break;
    
    default:
        break;
    }

    return 0;
}