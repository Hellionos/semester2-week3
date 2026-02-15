#include <stdio.h>

/*
 * Example using different variable types
 * We should use casts to properly combine values and get accurate results
 */

int main( void ) {

    double d = 1.0/3.0;
    float f = 2.3;
    int k = -7;

    // you can verify sums by comparing to a calculator

    // compute and print d/k as a double to 16 d.p.
    double doverk = d/k;
    printf("D divided K is %.16f\n",(double)doverk);
    // compute and print f-d as a double to 16 d.p.
    double fminusdd = f-d;
    printf("F minus D as a double is %.16f\n",fminusdd);
    // compute and print f-d as a float to 16 d.p.
    float fminusdf = (float)(double)f-d;
    printf("F minus D as a float is %.16f\n",fminusdf); 
    // compute and print k+d as a double to 16 d.p.
    double kplusd = (double)k+d;
    printf("K plus D is %.16f\n",kplusd);

    return 0;
}