// Neso Academy - Class n. 155: 
// Designated Initialization in Structures  

#include <stdio.h>
#include <stdlib.h>

// Designated Initialization in C, introduced in C99 standard, provides a way to initialize specific 
// members of a structure, union or elements of an array

// Example of structs

struct Point {
    int x;
    int y;
};

int main() 
{
    struct Point p = { .y = 20, .x = 10 }; // order doesn't matter
    return EXIT_SUCCESS;
}
