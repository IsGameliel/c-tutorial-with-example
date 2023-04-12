#include <stdio.h>

/*
+    addition
-    subtraction
/   division
*   Multiplication
--  decreament
++  increament
*/

int main(){
    int value1 = 12;
    int value2 = 13;
    int result = value1 + value2;

    int result2 = value2 - value1;

    double result3 = 312 / 13;
    int result4 = value1 * value2;

    printf("result %d\n", result);
    printf("result 2: %d\n", result2);
    printf("result 3: %.2lf\n", result3);
    printf("result 4: %d\n", result4);


    // decreament
    int result5 = --value1; 
    printf("result 5 %d\n", result5);

    int result6 = ++value2;
    printf("result 6 %d\n", result6);


    int answer = (12 + 3) / 12 * 3 - 12;
    printf("answer = %d\n", answer);


    return 0;

}