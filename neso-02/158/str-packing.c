// Neso Academy - Class n. 158: 
// Structure Packing in C  

#include <stdio.h>
#include <stdlib.h>

#pragma pack(1) 
// #pragma pack(n) is a special purpose directve used to turn on or off certain features
// n is number os bytes 
// Example: 
// #pragma pack(1) forces byte-level alignment, effectively removing all padding. Remember to use 
// #pragma pack() to restore the default packing after the relevant structures. 

// Turn on this directve, which, among many other things, means it will kind 'deactivate' padding on structures
// It makes size of strcuts easier to calculate (just the sum of the sizes of all members)

// Notice that we have downsides we both directions... 
// Either memory wasted or CPU cycles wasted...

struct abc {
    char a; // 1 byte
    char b; // 1 byte
    int c;  // 4 bytes
} var;

struct abc_2 {
    char b; // 1 byte
    int c;  // 4 bytes
    char a; // 1 byte
} var1;

int main() 
{
    printf("%ld\n", sizeof(var));  // 6
    printf("%ld\n", sizeof(var1)); // 6
    return EXIT_SUCCESS;
}
