#include <stdio.h>
#include <stdlib.h>

// Neso Academy - Class n. 83: 
// Recursion (Solved Problem 3) 

// Determine, what is the output 
int func(int n)
{
    int x = 1, k;
    if (n == 1) return x;

    for (k = 1; k < n; ++k)
        x = x + func(k) * func(n - k);
    return x;
}

/* How to solve:
func(1) is the base case, it returns 1
the result is the return of x 
x is constantly being incremented within the for loop
the result will be x summed up after all iterations */

int main(int argc, char *argv[]) 
{
    func(5); // 51
    return EXIT_SUCCESS;
}
