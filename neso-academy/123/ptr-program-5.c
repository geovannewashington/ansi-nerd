// Neso Academy - Class n. 123: 
// Pointers (Program 5) 

#include <stdio.h>
#include <stdlib.h>

// What is the output of the following program?

int i = 0, j = 1;

void foo(int *p, int *q) 
{
    p = q;
    *p = 2;
}

int main(void) 
{
    foo(&i, &j);
    printf("%d %d\n", i, j);
    return EXIT_SUCCESS;
}
