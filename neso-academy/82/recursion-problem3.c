#include <stdio.h>
#include <stdlib.h>

// Neso Academy - Class n. 82: 
// Recursion (Solved Problem 3) 

// Determine, what is going to happen 

// My answer:
// option (d): The function will exaust the runtime stack or run into an infinite loop when j = 50.

int foo(int j)
{
    static int i = 50;
    int k;
    if (i == j) {
        printf("something");
        k = foo(i); // this will exaust the call stack (stack overflow)
                  // since i is always 50 and we don't have a stop condition
        return 0;
    } else {
        return 0;
    }
}

int main(int argc, char *argv[]) 
{
    foo(50);
    return EXIT_SUCCESS;
}
