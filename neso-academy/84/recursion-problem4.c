#include <stdio.h>
#include <stdlib.h>

// Neso Academy - Class n. 84: 
// Recursion (Solved Problem 5) 

// Determine, what is the output 

/* To solve this question, remember: 
1: d is declared static, so it retains its value across function calls and is only initialized once. 
2: Even though count is a void function, it still returns to its caller like any function. Once 
a recursive call finishes, execution continues after the line where the function was called.
even without any return statements. 
*/
void count(int n)
{
    static int d = 1;
    printf("%d ", n);
    printf("%d ", n);
    d++;
    if(n > 1) count(n - 1);
    printf("%d ", d);
}


int main(int argc, char *argv[]) 
{
    count(3);
    return EXIT_SUCCESS;
}
