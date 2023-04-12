#include <stdio.h>
/*
different datatype and format specifier

int    %d 
double   %lf
char   %c
float  %f
*/

int main(){
    int value = 12;
    double number = 23.43;
    float number1 = 12.43f;
    char value2 = 'f';
    
    printf("int data type: %d\n", value);
    printf("double data type: %.2lf\n", number);
    printf("float data type: %.2f\n", number1);
    printf("char data type: %c\n", value2);
    return 0;
}