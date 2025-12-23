// Neso Academy - Class n. 154: 
// Initializing & Accessing the Structure Members  

// NOTE: Search: C programming: quick way of initializing structs, there are other ways...

#include <stdio.h>
#include <stdlib.h>

// There are several and efficient quick ways of initializing structs:

typedef struct {
    int red;
    int blue;
    int green;
} Colors;

void print_struct(Colors s) 
{
    printf("RED: %d | GREEN: %d | BLUE: %d\n", s.red, s.green, s.blue);
}

int main() 
{
    // 1. Positional Initialization
    Colors rgb = { 35, 219, 201 }; // Cyan
    print_struct(rgb);
    return EXIT_SUCCESS;
}
