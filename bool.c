#include <stdio.h>
#include <stdbool.h>

/* 

>   greater than
==  equal to
<   less than
>=  greater than equal to
<=  less than equal to
!=  not equal to

*/

int main(){
    int value = 12 > 32;
    printf("result: %d\n", value);

    int value2 = 32 == 32;
    printf("value 2: %d\n", value2);

    int value3 = 142 < 34;
    printf("value 3: %d\n", value3);


    int value4 = 43 >= 43;
    printf("value 4: %d\n", value4);

    int value5 = 32 <= 234;
    printf("value 5: %d\n", value5);

    int value6 = 32 != 32;
    printf("value 6: %d\n", value6);


    // Logical operators
   // ||  or
   // &&   and
   // !   not

   int result = (12 > 12) || (12< 43);
   printf("result for or: %d\n", result);

   int result2 = (12 >= 12) && (12 >= 43);
   printf("result for and: %d\n", result2);

   int result3 = !(23 < 32);
   printf("result for not operator; %d\n", result3);
    return 0;
}