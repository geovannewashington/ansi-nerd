#include <stdio.h> 

// Program to calculate the sum of first N numbers (faster)
int main(void)
{
    int n;                           // <- 1 time
    scanf("%d", &n);                 // <- 1 time
    printf("%d\n", n * (n + 1) / 2); // <- 1 time
    return 0;                        // <- 1 time
    
    // So we can say that, for this program, f(n) = 4
    // let g(n) = 1; 
    // f(n) <= c.g(n) = 4 <= 4
    // So we can say that f(n) = O(g(n)) for all n >= n0, where c = 4 and n0 = 1
}

