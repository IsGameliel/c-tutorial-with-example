#include <stdio.h>

int main(){
    int metrix[2][3] = {{12, 43, 12}, {23, 15, 100}};

    printf("input a value");
    scanf("%d", &metrix[0][1]);
 
    printf("%d", metrix[0][1]);
    return 0;
}