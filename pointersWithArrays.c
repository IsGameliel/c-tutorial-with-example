#include <stdio.h>

int main(){
    int numbers[6] = {12, 32, 44, 12, 89, 40};

    for (int i = 0; i < 6; ++i){
        printf("%d = %p\n\n", *(numbers + i), numbers + i);
    }

    printf("Array address: %p\n", numbers);
    printf("Array address: %p\n", numbers + 1);
    printf("Array address: %p\n", numbers + 2);
    printf("Array address: %p\n", numbers + 3);
    printf("Array address: %p\n", numbers + 4);
    printf("Array address: %p\n", numbers + 1);

    return 0;
}   