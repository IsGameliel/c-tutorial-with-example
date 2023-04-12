#include <stdio.h>
#include <string.h>

int main(){
    char name[] = "School of Programing";
    char text1[] = "Pizza";
    char text2[20];

    char text3[] = "Hei ";
    char text4[] = "How are you ";

    printf("%s\n", name);

    // length of a string
    printf("Length = %zu\n", strlen(name));

    // string copy
    strcpy(text2, text1);
    printf("%s\n", text2);


    // string concatination
    strcat(text3, text4);
    printf("%s\n", text3);

    // compare function

    char value[] = "abcd";
    char value2[] = "abcd";

    int result = strcmp(value, value2);
    printf("compare = %d\n", result);

    return 0;
}