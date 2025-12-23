// Neso Academy - Class n. 163: 
// Introduction to Unions in C  

#include <stdio.h>
#include <stdlib.h>

// 1. Union is a user defined data type but unlike structcs, union members share the same memory location.
/* union abc {
    int a;
    char b;
};
a's == 0x123 (example)
b's == 0x123 (example) */

// If we make changes in one member then it will be reflected to other members as well.

// 2. How to define the size of a union (actually much simpler than structs)
// The size will always be the larger member within that
// e.g.:  

// union abc {
//     int a;
//     char b;
//     double c;
//     float d;
// };
//
// sizeof(union abc) == sizeof(double);

// 3. Accesing members of union through pointers by using the arrow (->) operator. 
// (just like structs)

// 4. A little bit of its applications:
// Memory Optimization: Unions are primarily used to save memory, especially in embedded systems.
// By allowing different data types to share the same memory space, they reduce the overall memory footprint

typedef union  
{
    int a; 
    char b;
} abc;

int main() 
{
    abc foo; 
    foo.a = 65;

    printf("a = %d\n", foo.a); // -> 65
    printf("b = %c\n", foo.b); // -> A
    
    return EXIT_SUCCESS;
}
