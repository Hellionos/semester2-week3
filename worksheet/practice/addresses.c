
#include <stdio.h>

/*
 * Example using memory addresses
 */

int main( void ) {

    int k1 = 2.5;    // we define 2 integer variables
    int k2 =  -3.4;

    printf(" %p , %p\n",&k1,&k2);  // we print the memory addresses of both

    // what can you deduce about the memory usage and memory layout from inspecting the addresses?

    return 0;
}
/*
*0x7ffc45716040 , 0x7ffc45716044
*
*Placed directly adjacent to each other
*int is 4 bytes
*
*/