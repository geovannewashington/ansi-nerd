#include <stdio.h>
#include <stdlib.h>

// Neso Academy - Class n. 76:
// Write down a recursive function to calculate the factional of number N; 

int calc_fact(int n);

int main(int argc, char *argv[]) 
{
    int n; // number to calculate factorial of

    if (argc > 2) {
        fprintf(stderr, "Usage: ./fac-nums <number>\n");
        return EXIT_FAILURE;
    }

    // initializes n.
    if (argc == 2) {
        n = atoi(argv[1]);
    } else {
        // defaults to 5;
        n = 5;
    }

    // print result;
    printf("Factorial of %d is: %d\n", n, calc_fact(n));
}

// recursive function
int calc_fact(int n)
{
    // base case 
    if (n == 0) 
        return 1;

    return n * calc_fact(n - 1);
}
