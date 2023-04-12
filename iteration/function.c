#include <stdio.h>

int sum(int num1, int num2){
    int result = num1 + num2;
    return result;
}

int main(){
    int answer = sum(3, 5);
    printf("%d", answer);
    return 0;
}