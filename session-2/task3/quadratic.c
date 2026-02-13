
/*
 * Compute the roots of quadratic equation.
 * We will assume that 2 real roots exist at this point.
 * The equation is specified with 3 real constants a,b,c
 *    a.x^2 + b.x + c = 0
 */

#include <stdio.h>
#include <math.h>

int main( void ) {

    float a = 1.0;
    float b = -5.0;
    float c = 6.0;
    float root1, root2;
    float term1;
    float term2;
    float term3;
    float term2_3;
    float term4;
    float term5;


    /*
     * Implement the formula for the 2 roots of a quadratic.
     * You can define additional variable for intermediate results to make the code simpler.
     * Print out the final results for the 2 roots as float values.
     */
    term1=-b;
    term2=b*b;
    term3=-4*a*c;
    term2_3=term2+term3;
    term4=sqrt(term2_3);
    term5=2*a;
    root1 = (term1+term4)/term5;
    root2 = (term1-term4)/term5;
    
    printf("%f\n",root1);
    printf("%f\n",root2);

    return 0;
}
