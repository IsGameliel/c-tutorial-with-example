#include <stdio.h>

int main(){

    for(int i = 1; i < 5; i++){
        printf("%d\n", i);
        break;
        printf("After the break: ");
    }

    while(1){
        int value;
        printf("enter a value: ");
        scanf("%d", &value);

        if (value < 0)
        {
            continue;
        }
            printf("%d\n", value);
    }
    return 0;
}