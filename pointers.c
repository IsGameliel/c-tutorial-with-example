#include <stdio.h>

int main(){
    int age = 25;

    printf("%p\n", &age);

    int* agePtr = &age;
    printf("pointer variable for age: %p\n", agePtr);

    printf("value of the age pointer: %d\n", *agePtr);

    *agePtr = 100;
    printf("pointer variable for new age: %p\n", agePtr);
    printf("value of the age new   pointer: %d\n", *agePtr);
    return 0;
}