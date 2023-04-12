#include <stdio.h>

int main(){
    int number;
    printf("hello please input a number: ");
    scanf("%d", &number);

    int count = 12;
    int result;


    for(int i = 1; i <= count; i++){
        result = number * i;
        if(i == 6){
            continue;
        }
        printf("%d * %d = %d\n",number, i, result);
    }
    return 0;
}
