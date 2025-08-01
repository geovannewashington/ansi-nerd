#include <stdio.h>
#include <stdlib.h>

// Neso Academy - Class n. 75:
// Recursion in C
// What is the output of the following program 
// I think its 15

int func(int n) 
{
    if (n == 0) {
        return 1;
    } else {
        return 7 + func(n - 2);
    }
}

int main(void)
{
    printf("%d\n", func(4));
    return EXIT_SUCCESS; 
}

