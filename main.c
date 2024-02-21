#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 10;
    float b = 3.14;
    char c = 'A';


    float result1 = (float)a;
    printf("Int to float: %f\n", result1);


    int result2 = (int)b;
    printf("Float to int: %d\n", result2);


    int result3 = (int)c;
    printf("Char to int: %d\n", result3);


    int x = 10, y = 5, z = 3;
    float f1 = (float)(x + y) / z;
    float f2 = (float)x + y / z;
    printf("Result 1: %f\n", f1);
    printf("Result 2: %f\n", f2);

    return 0;
}


