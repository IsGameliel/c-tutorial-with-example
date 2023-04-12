#include <stdio.h>

int main(){
    int age;
    double number;
    char value;

    printf("Enter values for each: ");
    scanf("%d %lf %c", &age, &number, &value);

    printf("int input: %d\n", age);
    printf("double input: %lf\n", number);
    printf("char value: %c\n", value);
    return 0;
}