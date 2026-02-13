
/*
 * Use the sizeof() operator to examine memory use 
 * of primitive types char,int,float
 */

#include <stdio.h>

int main( void ) {

    char testChar;
    int testInt;
    short int testshint;
    long int testloint;
    float testFloat;
    double testdouble;

    printf("Char size is %ld bytes\n",sizeof(testChar));
    printf("Int size is %ld bytes\n",sizeof(testInt));
    printf("Short Int size is %ld bytes\n",sizeof(testshint));
    printf("Long Int size is %ld bytes\n",sizeof(testloint));
    printf("Float size is %ld bytes\n",sizeof(testFloat));
    printf("Double size is %ld bytes\n",sizeof(testdouble));

    return 0;
}
