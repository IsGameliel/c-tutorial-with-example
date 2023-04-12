#include <stdio.h>

int main() {

    char operator = '+';

    int num1 = 12;
    int num2 = 8;
    
    int result = (operator == '+') ? (num1 + num2) : (num1 - num2);

    printf("%d\n", result);

    return 0;
}