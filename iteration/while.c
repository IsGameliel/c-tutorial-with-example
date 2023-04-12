#include <stdio.h>

int main(){
    int number = 6;
    // printf("Input a number: ");
    // scanf("%d", &number);

    // int count = 1;
    // int result;

    // while (count <= 12)
    // {
    //     result = number * count;
    //     printf("%d * %d = %d\n", number, count, result);
    //     count++;
    // }

    do
    {
        printf("%d\n", number);
        number++;
    } while (number < 5);
    
    
    return 0;
}