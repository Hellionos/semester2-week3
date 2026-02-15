#include <stdio.h>

/*
 * Example using different variable types
 *
#include <stdint.h>   // for fixed-width ints like int64_t, uint64_t
#include <inttypes.h> // for printf macros like PRIu64, PRId64
#include <math.h>     // for M_PI (if available)

 * 
 * 
 * 
 * 
 */

int main( void ) {
    printf("Hello\n");
    // define variables for the following data and print something useful about them in each case
    // choose appropriate variable names and data types considering also the range of values that are possible

    // 1. the hour hand of a clock
    unsigned int HourHand = 6;
    // 2. the total population of a country, eg. China has approximately 1.4billion people
    unsigned long long int Pop = 1400000000;
    // 3. the number of minutes between a given date/time and the current date/time, either earlier (negative) or in the future (positive)
    signed long long int Min = -400000;
    // 4. the mean temperature in Leeds over a one-year period
    double Temp = 11.19;
    // 5. a precise GPS location to within 10cm distance
    double Loc = 43543.565;
    // 6. a calculation of pi to 12 decimal places 
    long double pi = 3.141592653589;
    return 0;
}