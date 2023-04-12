#include <stdio.h>

int main(){

    int number;
    printf("enter a number: ");
    scanf("%d", &number);

    int count = 12;
    int result;

    while (count >= 1)
    {
        result = number * count;
        printf("%d * %d = %d\n", number, count,result);
        count--;
    }
    
    return 0;
}