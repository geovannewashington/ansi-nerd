#include <stdio.h>
#include <stdlib.h>
#include "src/headers/math-utils.h"

// Neso Academy - Class n. 68:
// Static Functions in C.

// this function is exclusive to this file only.
// static void foo(const char *line);

int main(void)
{
    int x = 3, y = 2;
    int result = sum(x, y); 
    printf("%d\n", result); // -> 5
    return EXIT_SUCCESS; 
}

/* static void foo(const char *line)
{
    printf("%s\n", line);
} */
