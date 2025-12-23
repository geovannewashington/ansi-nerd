#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Neso Academy class n. 58 - Calculating power of an integer.
// I think the instructor wants me to essentially write my own pow() function.
// Since exponentiation is just a layer of abstraction of multiplication, we can do that.

// [VER. 2]: Should be able to handle negative exp.

double foopow(int base, int exp) 
{
    double res = 1.0;
    if (exp > 0) {
        while (exp != 0) {
            res *= base;
            exp--;
        } 
    } else if (exp < 0) {
        while (exp != 0) {
            res *= (1.0 / base);
            exp++;
        }
    }
    // if exp == 0, res stays 1.0
    return res; 
}

int main(int argc, char *argv[])
{
    printf("%d^%d = %g\n", 2, 0, foopow(2, 3));   // 8  
    printf("%d^%d = %g\n", 2, -3, foopow(2, -3)); // 0.125   
    exit(EXIT_SUCCESS);
}
