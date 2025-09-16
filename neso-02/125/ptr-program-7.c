// Neso Academy - Class n. 125: 
// Pointers (Program 7) 

#include <stdio.h>
#include <stdlib.h>

// What is printed? 

int f(int x, int *py, int **ppz) 
{
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}

int main(void) 
{
    int c, *b, **a;
    c = 4, b = &c, a = &b;
    printf("%d\n", f(c, b, a));
    // My final answer: 19 -> letra (b)
    return EXIT_SUCCESS;
}
