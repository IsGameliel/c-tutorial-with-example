#include <stdio.h>

int addNumber(int number1, int number2);

int main(){
    int result = addNumber(2, 3);
    printf("Result: %d\n", result);
    return 0;
}

int addNumber(int number1, int number2){ 
    int sum = number1 + number2;
    return sum;
}