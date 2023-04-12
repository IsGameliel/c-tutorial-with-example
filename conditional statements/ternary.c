#include <stdio.h>


int main(){
    int age;

    printf("Hello Pal how old are you? ");
    scanf("%d", &age);

    (age >= 19) ? printf("You are eligible to vote") : printf("you are not eligible");

    return 0;
}