#include <stdio.h>
#include <stdlib.h>

// Neso Academy class n. 58 - Calculating power of an integer.
// I think the instructor wants me to essentially write my own pow() function.
// Since exponentiation is just a layer of abstraction of multiplication, we can do that.

int foopow(int base, int exp) 
{
    int res = 1;
    for (int i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
}

int main(int argc, char *argv[])
{
    printf("%d^%d = %d\n", 2, 0, foopow(2, 0)); // 64  
    exit(EXIT_SUCCESS);
}
