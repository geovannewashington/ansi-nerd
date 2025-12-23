#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Neso Academy class n. 60 - Check if number is perfect number.
// Definition: perfect number is a positive integer that is equal to the sum of all its proper 
// positive divisors excluding the number itself.

int main(int argc, char *argv[])
{
    int n;
    printf("Insert a number: ");
    scanf("%d", &n);

    // there are no negative perfect numbers
    if (n <= 0) {
        fprintf(stderr, "Number must be positive.\n");
        exit(EXIT_FAILURE);
    }

    int sum = 0;
    // loops (n - 1) times
    for (int i = 1; i < n; i++) {
        // 1. verifies whether i is divisor of n or not.
        if (n % i == 0) // its divisor
            sum += i;
    }

    if (sum != n) {
        printf("%d is not a perfect number\n", n);
    } else {
        printf("%d is a perfect number\n", n);
    } 
    
    exit(EXIT_SUCCESS);
}
