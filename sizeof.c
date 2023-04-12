# include <stdio.h>

int main(){
    int age;
    double number;
    float number1;
    char test;

    printf("size of int: %zu\n", sizeof(age));
    printf("size of double: %zu\n", sizeof(number));
    printf("size of float: %zu\n", sizeof(number1));
    printf("size of char: %zu\n", sizeof(test));

    return 0;
}