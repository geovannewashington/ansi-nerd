#include <stdio.h>
#include <stdlib.h>

// Neso Academy - Class n. 81: 
// Recursion (Solved Problem 2) 

// Determine, how many number of times the star will be printed on the screen.

// This prints k(k + 1)/2 times
void foo(int n)
{
    int i = 0;
    if (n > 1)
        foo(n - 1);
    for (i = 0; i < n; i++) {
        printf(" * ");
    }
}

int main(int argc, char *argv[]) 
{
    foo(5);
    return 0;
}
