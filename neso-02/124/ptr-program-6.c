// Neso Academy - Class n. 124: 
// Pointers (Program 6) 

#include <stdio.h>
#include <stdlib.h>

// What is the output of the following program?

int f(int *a, int n) 
{
    // base case
    if (n <= 0) {
        return 0;
    } else if (*a % 2 == 0) { // *a is even
        return *a + f(a + 1, n - 1);
    } else { // *a is odd
        return *a - f(a + 1, n - 1);
    }
}

int main(void) 
{
    int a[] = { 12, 7, 13, 4, 11, 6 };
    printf("%d\n", f(a, 6));
    getchar();
    return EXIT_SUCCESS;
}
